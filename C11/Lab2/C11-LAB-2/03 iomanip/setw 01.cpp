#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()
#include <string>	// pour le type string

using namespace std;

int main()
{
	// CONSTANTES
	const int LARG = 120; // largeur de la fen�tre console en caract�res
	const string TITRE = "Exemple d'utilisation du manipulateur setw(x)";

	// VARIABLES
	size_t larg_titre = TITRE.size(); // le type size_t = unsigned long long
	int x;

	// CENTRER LE TITRE
	cout << right << setw((LARG - larg_titre) / 2 + larg_titre) << TITRE;


	// AFFICHAGE DU TABLEAU CADR� � GAUCHE
	x = 15;
	cout << left; //  cadrage � gauche, permanent � moins de le changer
	cout << "\n\n";
	cout << setw(x) << "Op\x82rateur"	<< setw(x) << "Nom" << "\n\n";
	cout << setw(x) << "+"				<< setw(x) << "addition" << "\n";
	cout << setw(x) << "-"				<< setw(x) << "soustraction" << "\n";
	cout << setw(x) << "*"				<< setw(x) << "multiplication" << "\n";
	cout << setw(x) << "/"				<< setw(x) << "division" << "\n";
	cout << setw(x) << "%"				<< setw(x) << "modulo" << "\n";

	// AFFICHAGE DU TABLEAU CADR� � DROITE
	x = 15;
	cout << right; // cadrage � droite, permanent � moins de le changer
	cout << "\n\n";
	cout << setw(x) << "Op\x82rateur"	<< setw(x) << "Nom" << "\n\n";
	cout << setw(x) << "+"				<< setw(x) << "addition" << "\n";
	cout << setw(x) << "-"				<< setw(x) << "soustraction" << "\n";
	cout << setw(x) << "*"				<< setw(x) << "multiplication" << "\n";
	cout << setw(x) << "/"				<< setw(x) << "division" << "\n";
	cout << setw(x) << "%"				<< setw(x) << "modulo" << "\n";

	_getch();
}