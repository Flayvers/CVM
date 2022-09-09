#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	bool reponse; // entier sur 1 octet

	// TESTS
	reponse = false;
	cout << reponse << endl; // affiche 0 pour false

	reponse = true;
	cout << reponse << endl; // affiche 1 pour true


	// BON À SAVOIR

	// En C++, l'entier zéro représente la valeur "false"
	reponse = 0;
	cout << reponse << endl; // affiche 0


	// et les autres entiers deviennent la valeur "true"
	reponse = 1;
	cout << reponse << endl; // affiche 1

	reponse = 4;
	cout << reponse << endl; // affiche 1

	reponse = -4;
	cout << reponse << endl; // affiche 1


	// MANIPULATEURS POUR AFFICHER OU NON LE BOOL EN TEXTE
	cout << boolalpha;		// pour afficher: "true" ou "false"
	cout << noboolalpha;	// pour afficher:  "1"   ou  "0"

	_getch();
}