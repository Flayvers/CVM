/*
	Description	: Convertisseur de poids
	Input		: Le poids en livres
	Output		: Le poids en kilogrammes
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// CONSTANTES
	const double TAUX_DE_CONVERSION = 0.453592;

	// VARIABLES
	double poids_lb; // lue du clavier
	double poids_kg; // calculé par le programme

	// INPUT
	cout << "Quel est le poids en livres ? ";
	cin >> poids_lb;		// Attention: l'utilisateur doit appuyer sur Enter, ce qui provoque aussi un changement de ligne

	// TRAITEMENT
	poids_kg = poids_lb * TAUX_DE_CONVERSION;

	// OUTPUT
	cout << "\n" << poids_lb << " lb --> " << poids_kg << " kg" << "\n";

	_getch();
}