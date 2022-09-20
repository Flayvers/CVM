#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int nombre = 7776, reste;

	// Exemple 1
	// ---------

	if (nombre % 2 == 0)
	{
		cout << "le nombre est pair";
	}
	else
	{
		cout << "le nombre est impair";
	}
	cout << endl;


	// Exemple 2
	// ---------

	if (nombre % 6 == 0)
	{
		cout << "le nombre est un multiple de 6";
	}
	else
	{
		cout << "le nombre n'est pas un multiple de 6";
	}
	cout << endl;


	// Exemple 3
	// ---------

	// unsigned int reste, n, m;

	// reste = n % m;	==> reste = [ 0 ... m-1 ]

	reste = 0 % 3;	// reste = 0
	reste = 1 % 3;	// reste = 1
	reste = 2 % 3;	// reste = 2

	reste = 3 % 3;	// reste = 0
	reste = 4 % 3;	// reste = 1
	reste = 5 % 3;	// reste = 2

	reste = 6 % 3;	// reste = 0
	reste = 7 % 3;	// reste = 1
	reste = 8 % 3;	// reste = 2

	_getch();
}