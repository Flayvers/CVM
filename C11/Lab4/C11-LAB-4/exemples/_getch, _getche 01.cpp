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
	touche = _getch(); // n'affiche pas le caractère

	// OUTPUT
	cout << "  ascci = " << touche << "  key = " << char(touche) << "\n\n";		// char(touche) converti touche qui est un int --> char


	// B) EXEMPPLE AVEC _getche() -- get caracter with echo		(nb: echo = affiche le caractère à la console)
	// ----------------------------------------------------

	// INPUT
	cout << "getche() -- Appuyer sur une touche svp ... ";
	touche = _getche(); // affiche le caractère

	// OUTPUT
	cout << " ascci = " << touche << "  key = " << char(touche) << "\n\n";		// char(touche) converti touche qui est un int --> char


	_getch(); // le caractère retourné par ce _getch() est perdu ici car non affecté dans une variable
}