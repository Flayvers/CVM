#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	double pi = 3.1415927, _2tiers = 2.0/3.0 ;

	// AFFICHAGE
	cout << "pi  = " << pi << "\n";
	cout << "2/3 = " << _2tiers << "\n\n";

	// AFFICHAGE AVEC UNE PRÉCISION À 2
	cout << fixed << setprecision(2);		// ne pas oublier le "fixed"
	cout << "pi  = " << pi << "\n";
	cout << "2/3 = " << _2tiers << "\n\n";

	// AFFICHAGE AVEC UNE PRÉCISION À 0
	cout << fixed << setprecision(0);
	cout << "pi  = " << pi << "\n";
	cout << "2/3 = " << _2tiers << "\n\n";

	// AFFICHAGE SCIENTIFIQUE AVEC UNE PRÉCISION À 3
	cout << scientific << setprecision(3);
	cout << "pi  = " << pi << "\n";
	cout << "2/3 = " << _2tiers << "\n\n";

	_getch();
}