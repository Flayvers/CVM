#include <iostream>	// pour le cout
#include <conio.h>	// pour le _getch()
#include <iomanip>
#include <string>	// pour le type string

using namespace std;

int main()
{
	// VARIABLES
	int x = 28;
	string voiture_marque, voiture_modele, voiture_couleur;

	// INPUT AVEC GETLINE AU LIEU DE CIN QUAND C'EST DU TEXTE (string)
	// Attention: tout le texte, incluant les blancs, sera mis dans la variable
	
	cout << "\xB7 propos de votre voiture :" << "\n\n";

	cout << setw(x) << "Quelle est la marque ? ";
	getline(cin, voiture_marque);

	cout << "\n";
	cout << setw(x) << "Quelle est le mod\x8ale ? ";
	getline(cin, voiture_modele);

	cout << "\n";
	cout << setw(x) << "Quelle est la couleur ? ";
	getline(cin, voiture_couleur);

	// OUTPUT
	cout << "\n"  << "Votre voiture est une " << voiture_marque << " mod\x8ale " << voiture_modele << " de couleur " << voiture_couleur << " !" << "\n";

	_getch();
}