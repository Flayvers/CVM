#include <iostream>
#include <conio.h>

using namespace std;

// INSTRUCTION FOR IMBRIQUÉE DANS UNE AUTRE INSTRUCTION FOR

int main()
{
	// Exemple #1 -- afficher tout les résultats possibles d'un lancer de deux dés

	for (int dé_1 = 1; dé_1 <= 6; ++dé_1)
	{
		for (int dé_2 = 1; dé_2 <= 6; ++dé_2)
		{
			cout << "(" << dé_1 << "," << dé_2 << ")" << "  ";
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

	// Exemple #3b -- afficher un triangle rectangle inversé

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