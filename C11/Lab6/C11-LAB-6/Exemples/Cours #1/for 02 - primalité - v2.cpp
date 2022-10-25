#include <iostream>
#include <conio.h>

using namespace std;

// TEST DE PRIMALITÉ: VERSION PLUS RAPIDE

// Un nombre premier n est un entier naturel qui admet exactement deux (d)iviseurs distincts entiers et positifs (i.e. 1 et n, et n > 1)

// Exemples de nombres premiers : 2, 3, 5, 137, 2147483647, 18446744073709551557

int main()
{	
	uint64_t n, d;	// uint64_t est un alias à "unsigned long long"
	bool estPremier;

	// INPUT
	n = 18446744073709551557;

	// VÉRIFICATION
	d = 1;
	estPremier = false;

	if (n > 2 && n % 2 == 0)	// n est pair !
		d = 2;
	else if (n >= 2)
	{
		estPremier = true;
		for (d = 3; d <= sqrt(n) && estPremier; d += 2)	// on visite uniquement les d impairs jusqu'à la racine carrée de n
			if (n % d == 0)
				estPremier = false;
		d -= 1;
	}

	// VERDICT
	if (estPremier)
		cout << n << " est premier !";
	else
		cout << n << " n'est pas premier" << "  ==>  " << d << " x " << n / d << " !";

	_getch();
}