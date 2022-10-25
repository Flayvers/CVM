#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>		// pour les fonctions mathématiques

using namespace std;

// FONCTIONS MATHÉMATIQUES STANDARDS

int main()
{
	cout << fixed << setprecision(2) << endl;

	// exponentiel
	cout << "pow(2,6)     = " << pow(2,6) << "\n\n";					// --> 64.00
	

	// log en base 2
	cout << "log_2(64)    = " << log2(64) << "\n";						// --> 6.00

	// log en base 10
	cout << "log_10(10)   = " << log10(100) << "\n";					// --> 2.00

	// log en base b
	int b = 3;
	cout << "log_" << b << "(27)    = " << log2(27) / log2(b) << "\n";	// --> 3.00

	// log népérien en base e
	cout << "log_e(10)    = " << log(10) << "\n\n";						// --> 2.30


	// racine carrée
	cout << "sqrt(64)     = " << sqrt(64) << "\n";						// --> 8.00

	_getch();
}