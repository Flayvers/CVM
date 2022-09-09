#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	string texte_1, texte_2;
	bool resultat;

	// TESTS

	texte_1 = "Bonjour";
	texte_2 = "bonjour";

	resultat = texte_1 != texte_2;				// true
	cout << resultat << endl;

	resultat = texte_1 == texte_2;				// false
	cout << resultat << endl;


	// ATTENTION: ordre lexical, majuscule avant minuscule

	texte_1 = "Allo";
	texte_2 = "allo";

	resultat = texte_1 < texte_2;				// true
	cout << resultat << endl;

	texte_1 = "estelle";
	texte_2 = "paul";

	resultat = texte_1 < texte_2;				// true
	cout << resultat << endl;

	_getch();
}