#include <iostream>	// pour le cout
#include <conio.h>	// pour le _getch()
#include <string>	// pour le type string

using namespace std;

int main()
{
	// VARIABLES
	int population = 0;
	string ville = ""; // initialisée à la chaine vide ""

	// INPUT
	cout << "Ville ? ";
	cin >> ville;				// Attention: ne par mettre de blanc dans le nom. Le trait d'union pour les noms composés

	cout << "Population ? ";
	cin >> population;

	// OUTPUT
	cout << "\n" << ville << " est une jolie ville de " << population << " habitants !" << "\n";

	_getch();
}