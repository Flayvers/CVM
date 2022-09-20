#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	char lettre, majuscule, minuscule;


	// A) EXEMPPLES AVEC toupper() -- to upper case
	// --------------------------------------------

	lettre = 'e';

	majuscule = toupper(lettre);

	cout << "Lettre: " << lettre << "  majuscule: " << majuscule << "\n";


	// B) EXEMPPLES AVEC tolower() -- to lower case
	// --------------------------------------------

	lettre = majuscule;

	minuscule = tolower(lettre);

	cout << "Lettre: " << lettre << "  minuscule: " << minuscule << "\n";


	// REMARQUE: A et B fonctionne seulement avec les lettres sans accent

	_getch();
}