#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char note = 'B';

	switch (note)
	{
		case 'A': 
			cout << 'A' << " = Excellent";
			break;
		case 'B':
			cout << 'B' << " = Tr\x8as bien";
			break;
		case 'C':
			cout << 'C' << " = Bien";
			break;
		case 'D':
			cout << 'D' << " = Passable";
			break;
		case 'E':
			cout << 'E' << " = \220chec";
			break;
		default:
			cout << note << " = invalide";
	}

	_getch();
}