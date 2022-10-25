#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

/*

PORTÉE D'UNE VARIABLE

	On appelle portée d'une variable l'ensemble des endroits du programme où elle existe.

*/


int main()
{
	int m = 1;								// (1) définition de m et début de sa portée

	// ...


	{
		int b = 200;						// (2) définition de b et début de sa portée

		// ...

		cout << m << " : " << b << endl;	// affiche 1 : 200

	}										// (2) fin de la portée de b


	// ...	b n'existe pas ici


	{
		int b = 300;						// (3) autre définition de b et début de sa portée

		// ...

		cout << m << " : " << b << endl;	// affiche 1 : 300

	}										// (3) fin de l'autre portée de b


	// ...	b n'existe pas ici


	{
		// ...

		// cout << m << " : " << b << endl;	// b n'existe pas ici --> erreur de compilation

	}


	// ...


	{
		int m = 400;						// (4) autre définition de m et début de sa portée. La portée (1) de m devient invisible à partir d'ici

		// ...

		cout << m << endl;					// affiche 400

	}										// (4) fin de l'autre portée de m. La portée (1) de m redevient visible à partir d'ici


	// ...


	cout << m << endl;						// affiche 1


	// ...
	_getch();

}											// (1) fin de la portée de m