#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	const double POSSIBILIT�S = 36;
	
	unsigned int somme, d�_�_jouer_1, d�_�_jouer_2;	// [ faces: 1 � 6 ]

	double chance = 0;

	// Lancer les d�s

	d�_�_jouer_1 = 3;
	d�_�_jouer_2 = 6;

	somme = d�_�_jouer_1 + d�_�_jouer_2;

	// Probabilit�s

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

	cout << "Il y a " << chance << " chance(s) sur " << POSSIBILIT�S << " d'obtenir la somme " << somme << " avec deux d\x82s !";


	_getch();
}