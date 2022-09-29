#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	const double POSSIBILITÉS = 36;
	
	unsigned int somme, dé_à_jouer_1, dé_à_jouer_2;	// [ faces: 1 à 6 ]

	double chance = 0;

	// Lancer les dés

	dé_à_jouer_1 = 3;
	dé_à_jouer_2 = 6;

	somme = dé_à_jouer_1 + dé_à_jouer_2;

	// Probabilités

	switch (somme)
	{
		case 2:	case 12:
			chance = 1; break;

		case 3:	case 11:
			chance = 2; break;

		case 4:	case 10:
			chance = 3; break;

		case 5:	case 9:
			chance = 4; break;

		case 6:	case 8:
			chance = 5; break;

		case 7:
			chance = 6; break;
	}

	cout << "Il y a " << chance << " chance(s) sur " << POSSIBILITÉS << " d'obtenir la somme " << somme << " avec deux d\x82s !";


	_getch();
}