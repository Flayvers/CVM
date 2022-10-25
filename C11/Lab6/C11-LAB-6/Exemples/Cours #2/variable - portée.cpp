#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

/*

PORT�E D'UNE VARIABLE

	On appelle port�e d'une variable l'ensemble des endroits du programme o� elle existe.

*/


int main()
{
	int m = 1;								// (1) d�finition de m et d�but de sa port�e

	// ...


	{
		int b = 200;						// (2) d�finition de b et d�but de sa port�e

		// ...

		cout << m << " : " << b << endl;	// affiche 1 : 200

	}										// (2) fin de la port�e de b


	// ...	b n'existe pas ici


	{
		int b = 300;						// (3) autre d�finition de b et d�but de sa port�e

		// ...

		cout << m << " : " << b << endl;	// affiche 1 : 300

	}										// (3) fin de l'autre port�e de b


	// ...	b n'existe pas ici


	{
		// ...

		// cout << m << " : " << b << endl;	// b n'existe pas ici --> erreur de compilation

	}


	// ...


	{
		int m = 400;						// (4) autre d�finition de m et d�but de sa port�e. La port�e (1) de m devient invisible � partir d'ici

		// ...

		cout << m << endl;					// affiche 400

	}										// (4) fin de l'autre port�e de m. La port�e (1) de m redevient visible � partir d'ici


	// ...


	cout << m << endl;						// affiche 1


	// ...
	_getch();

}											// (1) fin de la port�e de m