/*
	Auteur		: le prof
	Description	: Conversion des degr�s celcius en fahrenheit
	Input		: La temp�rature en celcius et le taux de conversion
	Output		: La temp�rature en fahrenheit
	Version		: 1.0
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// CONSTANTES
	const double TAUX = 9.0/5.0; // et non 9/5 car le r�sultat donne 1

	// VARIABLES
	double celsius, fahrenheit;

	// INPUT
	celsius = 20.5;

	// TRAITEMENT
	fahrenheit = (celsius * TAUX) + 32;

	// OUTPUT
	cout << celsius << " celsius" << " = " << fahrenheit << " fahrenheit" << endl;
	_getch();
}