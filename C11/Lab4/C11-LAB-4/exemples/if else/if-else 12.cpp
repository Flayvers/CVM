#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple -- if avec un bloc vide d'instruction
	// ---------------------------------------------

	// validation de l'âge d'une personne

	int age = 133;

	if (age >= 0 && age <= 120)
	{
		// aucune instruction à faire   ==> Style douteux qui devrait être modifier
	}
	else
	{
		cout << "erreur ! ";
	}


	// essai 1) Réécrire la condition exprimant le sens opposé (nb: pourrait être parfois difficile à trouver ...)
	
	if (age < 0 || age > 120)
	{
		cout << "erreur ! ";
	}


	// essai 2) Réécrire simplement en évaluant l'inverse de la condition avec l'opérateur ! (nb: très facile à faire ...)
	
	if ( ! ( age >= 0 && age <= 120 ) )
	{
		cout << "erreur ! ";
	}

	_getch();
}