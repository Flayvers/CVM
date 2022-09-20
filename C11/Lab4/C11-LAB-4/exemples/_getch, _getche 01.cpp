#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	int touche;


	// A) EXEMPPLE AVEC _getch() -- get caracter
	// -----------------------------------------

	// INPUT
	cout << "_getch()  -- Appuyer sur une touche svp ... ";
	touche = _getch(); // n'affiche pas le caract�re

	// OUTPUT
	cout << "  ascci = " << touche << "  key = " << char(touche) << "\n\n";		// char(touche) converti touche qui est un int --> char


	// B) EXEMPPLE AVEC _getche() -- get caracter with echo		(nb: echo = affiche le caract�re � la console)
	// ----------------------------------------------------

	// INPUT
	cout << "getche() -- Appuyer sur une touche svp ... ";
	touche = _getche(); // affiche le caract�re

	// OUTPUT
	cout << " ascci = " << touche << "  key = " << char(touche) << "\n\n";		// char(touche) converti touche qui est un int --> char


	_getch(); // le caract�re retourn� par ce _getch() est perdu ici car non affect� dans une variable
}