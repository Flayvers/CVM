#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	int x = 37, y = 50, z = 75;

	// AFFICHAGE DES ENTIERS EN OCTAL
	cout << oct;
	cout << "oct:  " << "x = " << x << ", y = " << y << ", z = " << z << "\n";

	// AFFICHAGE DES ENTIERS EN HEXADÉCIMAL
	cout << dec;
	cout << "dec:  " << "x = " << x << ", y = " << y << ", z = " << z << "\n";

	// AFFICHAGE DES ENTIERS EN DÉCIMAL
	cout << hex;
	cout << "hex:  " << "x = " << x << ", y = " << y << ", z = " << z << "\n";

	_getch();
}