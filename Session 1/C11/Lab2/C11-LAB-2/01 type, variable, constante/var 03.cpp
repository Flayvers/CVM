/*
	Auteur		: le prof
	Description	: Durée en secondes d'un voyage effectué à la vitesse lumière
	Input		: La distance à parcourir en km et la vitesse lumière
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
	double km;		// distance à parcourir en km
	double temps;	// temps du voyage en secondes

	// INPUT
	km = 150000000; // distance moyenne avec le soleil

	// TRAITEMENT
	temps = km / LIGHTSPEED;

	// OUTPUT
	cout << "Temps moyen du voyage vers le soleil a la vitesse lumiere : " << temps << " secs" << endl;
	_getch();
}