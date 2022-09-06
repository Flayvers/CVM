/*
	Auteur		: le prof
	Description	: Dur�e en secondes d'un voyage effectu� � la vitesse lumi�re
	Input		: La distance � parcourir en km et la vitesse lumi�re
	Output		: Le temps du voyage en secondes
	Version		: 1.0
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// CONSTANTES
	const int LIGHTSPEED = 300000; // en km/s

	// VARIABLES
	double km;		// distance � parcourir en km
	double temps;	// temps du voyage en secondes

	// INPUT
	km = 150000000; // distance moyenne avec le soleil

	// TRAITEMENT
	temps = km / LIGHTSPEED;

	// OUTPUT
	cout << "Temps moyen du voyage vers le soleil a la vitesse lumiere : " << temps << " secs" << endl;
	_getch();
}