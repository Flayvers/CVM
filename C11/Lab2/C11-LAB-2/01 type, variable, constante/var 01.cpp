/*
	Auteur		: le prof
	Description	: Conversion des années en secondes
	Input		: Le nombre d'années
	Output		: Le nombre de secondes
	Version		: 1.0
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	int années, secondes;

	// INPUT
	années = 10;

	// TRAITEMENT
	secondes = années * 365 * 24 * 60 * 60; // attention ici au débordement dans un int

	// OUTPUT
	cout << années << " ans" << " = " << secondes << " secs" << endl;
	_getch();
}