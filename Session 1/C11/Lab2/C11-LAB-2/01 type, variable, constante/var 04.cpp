/*
	Auteur		: le prof
	Description	: Souhaiter la bienvenue aux �tudiants
	Input		: Le pr�nom et le nom
	Output		: Message de bienvenu.
	Version		: 1.0
*/

#include <iostream>	// pour le cout
#include <conio.h>	// pour le _getch()
#include <string>	// pour le type string

using namespace std;

int main()
{
	// CONSTANTES
	const string CEGEP = "Cegep du Vieux-Montreal";

	// VARIABLES
	string prenom;
	string nom;

	// INPUT - �TUDIANT #1
	prenom = "Gustave";
	nom    = "Sylvestre";

	// OUTPUT
	cout
		<< "Bonjour" << endl
		<< "  " << prenom << " " << nom << "," << endl
		<< "bonne session au " << CEGEP << " !" << endl << endl;

	// INPUT - �TUDIANT #2
	prenom = "Simone";
	nom    = "Laporte";

	// OUTPUT
	cout
		<< "Bonjour" << endl
		<< "  " << prenom << " " << nom << "," << endl
		<< "bonne session au " << CEGEP << " !" << endl << endl;

	_getch();
}