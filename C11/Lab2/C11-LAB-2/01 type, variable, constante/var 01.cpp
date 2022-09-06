/*
	Auteur		: le prof
	Description	: Conversion des ann�es en secondes
	Input		: Le nombre d'ann�es
	Output		: Le nombre de secondes
	Version		: 1.0
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	int ann�es, secondes;

	// INPUT
	ann�es = 10;

	// TRAITEMENT
	secondes = ann�es * 365 * 24 * 60 * 60; // attention ici au d�bordement dans un int

	// OUTPUT
	cout << ann�es << " ans" << " = " << secondes << " secs" << endl;
	_getch();
}