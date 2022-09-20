#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple -- if avec un bloc vide d'instruction
	// ---------------------------------------------

	// validation de l'�ge d'une personne

	int age = 133;

	if (age >= 0 && age <= 120)
	{
		// aucune instruction � faire   ==> Style douteux qui devrait �tre modifier
	}
	else
	{
		cout << "erreur ! ";
	}


	// essai 1) R��crire la condition exprimant le sens oppos� (nb: pourrait �tre parfois difficile � trouver ...)
	
	if (age < 0 || age > 120)
	{
		cout << "erreur ! ";
	}


	// essai 2) R��crire simplement en �valuant l'inverse de la condition avec l'op�rateur ! (nb: tr�s facile � faire ...)
	
	if ( ! ( age >= 0 && age <= 120 ) )
	{
		cout << "erreur ! ";
	}

	_getch();
}