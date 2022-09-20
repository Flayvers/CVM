#include <iostream>	// pour le cout
#include <conio.h>	// pour le _getch()
#include <string>	// pour le type string

using namespace std;

int main()
{
	// VARIABLES
	int jour, mois, annee;

	// INPUT
	cout << "Entrez votre date de naissance (jj mm aaaa) : ";
	cin >> jour >> mois >> annee;			// Lecture en cascade -- attention --> mettre au moins un blanc entre chaque nombre lors de l'entrée

	// OUTPUT
	cout << "\n" << "date de naissance lue : " << jour << "-" << mois << "-" << annee << " !";

	_getch();
}