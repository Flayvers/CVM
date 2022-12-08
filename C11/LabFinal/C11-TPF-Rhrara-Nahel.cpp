#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <ctime>
#include "../CVM_LIB/cvm 21.h"

using namespace::std;

int main()
{
	setcp(1252);


	const string TITRE = "JEU DES COULEURS";
	const string TITRE2 = "RÉGLAGES DE LA PARTIE";
	const int SPACE = 9;
	
	int couleur;
	char code[3];
	char debug;

	for (int i = 0; i < 3; i++)
	{
		couleur = rand() % 6 + 1;
		switch (couleur)
		{
		case 1:
			code[i] = 'R';
			break;
		case 2:
			code[i] = 'V';
			break;
		case 3:
			code[i] = 'B';
			break;
		case 4:
			code[i] = 'J';
			break;
		case 5:
			code[i] = 'M';
			break;
		case 6:
			code[i] = 'C';
			break;
		default:
			cout << "erreur";
		}
	}

	cout << endl;
	cout << setw(((120 - TITRE.size()) / 2) + TITRE.size()) << right << TITRE;
	cout << endl << endl << endl;
	cout << setw(((120 - TITRE2.size()) / 2) + TITRE2.size()) << right << TITRE2;
	cout << endl << endl << endl;

	cout << setw(8) << "Activer le mode en débogage ? (O / N) : ";
	
	do 
	{
		debug = toupper(_getch());
	} while (debug != 'O' && debug != 'N');

	clrscr();

	cout << endl;
	cout << setw(((120 - TITRE.size()) / 2) + TITRE.size()) << right << TITRE;
	cout << endl << endl << endl << endl;

	cout << setw(8) << "" << "(R)ouge , (V)ert , (B)leu , (J)aune , (M)auve , (C)yan";
	cout << endl << endl << endl;

	cout << setw(9) << "#" << setw(4) << "" << setw(14) << left << "Essais" << setw(18) << "Bien placée(s)" << "Mal placée(s)";
	cout << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		gotoxy(0, 10 + i);
		cout << setw(9) << right << i+1 << ")";
	}

	_getch();
}
