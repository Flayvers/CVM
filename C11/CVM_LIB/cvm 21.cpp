#include <windows.h>
#include "cvm 21.h"

using namespace std;

// CVM

class CVM
{
	public:

		void clrscr();
		void clreol();
		void clreoscr();

		size_t wherex();
		size_t wherey();
		void gotoxy(size_t x, size_t y);

		void show(bool flag);
		void setcp(unsigned cp);

		void setcolor(Color tx);
		void setcolor(Color bg, Color tx);


		CVM();

	private:

		HANDLE h;
		CONSOLE_SCREEN_BUFFER_INFOEX csbi;
};

CVM::CVM()
{
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
}

void CVM::clreol()
{
	DWORD length, dummy;
	GetConsoleScreenBufferInfoEx(h, &csbi);
	length = csbi.srWindow.Right - csbi.dwCursorPosition.X;
	FillConsoleOutputCharacter(h, 32, length, csbi.dwCursorPosition, &dummy);
}

void CVM::clreoscr()
{
	DWORD length = 0xFFFFFFFF, dummy;
	GetConsoleScreenBufferInfoEx(h, &csbi);
	FillConsoleOutputCharacter(h, 32, length, csbi.dwCursorPosition, &dummy);
}

void CVM::clrscr()
{
	DWORD length = 0xFFFFFFFF, dummy;
	FillConsoleOutputCharacter(h, 32, length, {}, &dummy);
	SetConsoleCursorPosition(h, {});
}

size_t CVM::wherex() { GetConsoleScreenBufferInfoEx(h, &csbi); return csbi.dwCursorPosition.X; }
size_t CVM::wherey() { GetConsoleScreenBufferInfoEx(h, &csbi); return csbi.dwCursorPosition.Y; }

void CVM::gotoxy(size_t x, size_t y) { SetConsoleCursorPosition(h, { short(x), short(y) }); }

void CVM::show(bool flag)
{
	CONSOLE_CURSOR_INFO info;
	GetConsoleCursorInfo(h, &info);
	info.bVisible = flag;
	SetConsoleCursorInfo(h, &info);
}

void CVM::setcp(unsigned cp) { SetConsoleCP(cp); SetConsoleOutputCP(cp); }

void CVM::setcolor(Color tx) { SetConsoleTextAttribute(h, WORD(tx)); }
void CVM::setcolor(Color bg, Color tx) { SetConsoleTextAttribute(h, WORD(bg) * 16 + WORD(tx)); }


// CVM API

static CVM cvm;

void clreol() { cvm.clreol(); }
void clreoscr() { cvm.clreoscr(); }
void clrscr() { cvm.clrscr(); }

size_t wherex() { return cvm.wherex(); }
size_t wherey() { return cvm.wherey(); }
void gotoxy(size_t x, size_t y) { cvm.gotoxy(x, y); }

void show(bool flag) { cvm.show(flag); }
void setcp(unsigned cp) { cvm.setcp(cp); }

void setcolor(Color c) { cvm.setcolor(c); };
void setcolor(Color bg, Color tx) { cvm.setcolor(bg, tx); };



// CONSOLE

class Console
{
	public:

		// buffer size
		uint16_t getb_rows();
		uint16_t getb_cols();

		bool setb_rows(uint16_t rows);
		bool setb_cols(uint16_t cols);

		// window size
		uint16_t getw_rows();
		uint16_t getw_cols();
		uint16_t getw_maxrows();
		uint16_t getw_maxcols();

		bool setw_size(uint16_t cols, uint16_t rows);
		bool setw_fullscreen();

		// window position
		int getw_x();
		int getw_y();
		bool setw_pos(int x, int y);

		Console();

		string windowshot(bool endl);
		string buffershot(bool endl);

	private:

		HANDLE h;
		CONSOLE_SCREEN_BUFFER_INFOEX csbi;

		void get_csbi();
		bool set_csbi();
		void setw_rect(SMALL_RECT rect);
};


Console::Console()
{
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
	//GetConsoleScreenBufferInfoEx(h, &csbi);
}

void Console::get_csbi() { GetConsoleScreenBufferInfoEx(h, &csbi); }
bool Console::set_csbi() { return SetConsoleScreenBufferInfoEx(h, &csbi); }

void Console::setw_rect(SMALL_RECT rect) { SetConsoleWindowInfo(h, true, &rect); };


uint16_t Console::getb_rows() { get_csbi(); return csbi.dwSize.Y; }
uint16_t Console::getb_cols() { get_csbi(); return csbi.dwSize.X; }

uint16_t Console::getw_rows() { get_csbi(); return csbi.srWindow.Bottom - csbi.srWindow.Top + 1; }
uint16_t Console::getw_cols() { get_csbi(); return csbi.srWindow.Right - csbi.srWindow.Left + 1; }

uint16_t Console::getw_maxrows() { COORD largestSize = GetLargestConsoleWindowSize(h); return largestSize.Y; }
uint16_t Console::getw_maxcols() { COORD largestSize = GetLargestConsoleWindowSize(h); return largestSize.X; }

int Console::getw_x() { RECT rect; GetWindowRect(GetConsoleWindow(), &rect); return rect.left; }
int Console::getw_y() { RECT rect; GetWindowRect(GetConsoleWindow(), &rect); return rect.top; }


bool Console::setb_rows(uint16_t rows)
{
	get_csbi();
	if (rows < getw_rows()) return false; // redimensionner la fenêtre avant
	csbi.dwSize.Y = rows;
	csbi.srWindow.Bottom += 1; // bug the windows ???  
	return set_csbi();
}

bool Console::setb_cols(uint16_t cols)
{
	get_csbi();
	if (cols < getw_cols())	return false; // redimensionner la fenêtre avant
	csbi.dwSize.X = cols;
	csbi.srWindow.Bottom += 1; // bug the windows ???  
	return set_csbi();
}

bool Console::setw_size(uint16_t rows, uint16_t cols)
{
	if ((cols == 0) || (rows == 0)) return false; // deuhh ...

	COORD largestSize = GetLargestConsoleWindowSize(h);
	if ((cols > largestSize.X) || (rows > largestSize.Y)) return false; // rentre pas dans l'écran...

	get_csbi();

	if (rows > csbi.dwSize.Y) setb_rows(rows);
	if (cols > csbi.dwSize.X) setb_cols(cols);

	setw_rect({ 0, 0, cols - 1, rows - 1 });
	setb_cols(cols);
	return true;
}

bool Console::setw_pos(int x, int y)
{
	HWND consoleWindow = GetConsoleWindow();
	return SetWindowPos(consoleWindow, 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}

bool Console::setw_fullscreen()
{
	setw_size(getw_maxcols(), getw_maxrows());
	return setw_pos(-8, 0);
}

string Console::windowshot(bool endl)
{
	GetConsoleScreenBufferInfoEx(h, &csbi);
	size_t col = size_t(1) + csbi.srWindow.Right - csbi.srWindow.Left;
	size_t lig = size_t(1) + csbi.srWindow.Bottom - csbi.srWindow.Top;
	size_t size = col * lig;
	CHAR_INFO* buffer = new CHAR_INFO [size];
	ReadConsoleOutput(h, buffer, {short(col), short(lig)}, {0,0}, &csbi.srWindow);

	string ws;
	for (size_t c = 0; c < size;)
	{
		ws += buffer[c++].Char.AsciiChar;
		if (endl && c % col == 0) ws += '\n';
	}
	delete[] buffer;
	return ws;
}

string Console::buffershot(bool endl)
{
	GetConsoleScreenBufferInfoEx(h, &csbi);
	SMALL_RECT sr = {0, 0, csbi.dwSize.X, csbi.dwCursorPosition.Y};
	size_t size = csbi.dwSize.X * csbi.dwCursorPosition.Y;
	CHAR_INFO* buffer = new CHAR_INFO[size];
	ReadConsoleOutput(h, buffer, {csbi.dwSize.X, csbi.dwCursorPosition.Y}, {0,0}, &sr);

	string bs;
	for (size_t c = 0; c < size;)
	{
		bs += buffer[c++].Char.AsciiChar;
		if (endl && c % csbi.dwSize.X == 0) bs += '\n';
	}
	delete[] buffer;
	return bs;
}


// CONSOLE API

static Console cs;

void setwsize(unsigned rows, unsigned cols) { cs.setw_size(rows, cols); }

string windowshot(bool wrap) { return cs.windowshot(wrap); }
string buffershot(bool wrap) { return cs.buffershot(wrap); }