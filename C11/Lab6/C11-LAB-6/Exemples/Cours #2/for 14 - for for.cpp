#include <iostream>
#include <conio.h>

using namespace std;

// INSTRUCTION FOR IMBRIQU�E DANS UNE AUTRE INSTRUCTION FOR

int main()
{
	// Exemple #1 -- afficher tout les r�sultats possibles d'un lancer de deux d�s

	for (int d�_1 = 1; d�_1 <= 6; ++d�_1)
	{
		for (int d�_2 = 1; d�_2 <= 6; ++d�_2)
		{
			cout << "(" << d�_1 << "," << d�_2 << ")" << "  ";
		}
		cout << endl;
	}
	cout << endl;

	// Exemple #2 -- afficher une boite de 4 x 6

	for (int r = 1; r <= 4; ++r)
	{
		for (int c = 1; c <= 6; ++c)
		{
			cout << '-';
		}
		cout << endl;
	}
	cout << endl;

	// Exemple #3a -- afficher un triangle rectangle

	for (int r = 1; r <= 8; ++r)
	{
		for (int c = 1; c <= r; ++c)
		{
			cout << '-';
		}
		cout << endl;
	}
	cout << endl;

	// Exemple #3b -- afficher un triangle rectangle invers�

	for (int r = 8; r >= 1; --r)
	{
		for (int c = 1; c <= r; ++c)
		{
			cout << '-';
		}
		cout << endl;
	}

	_getch();
}