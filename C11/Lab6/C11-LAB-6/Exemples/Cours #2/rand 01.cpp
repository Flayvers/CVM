#include <iostream>
#include <conio.h>

using namespace std;

// G�N�RATION DE NOMBRES (PSEUDO) AL�ATOIRES (RANDOM)

// DEUX FONCTIONS:
//	1) rand()		-- le g�n�rateur de nombres
//	2) srand(i)		-- pour initiliser ou reinitialiser l'�tat de d�part du g�n�rateur (seed random)

int main()
{
	// EXEMPLE #1
	// ----------

	// La fonction rand() choisi, � chaque appel, un nombre entier al�atoire dans l'intervalle: [0 .. 32767]

	// Une succession d'appels � la fonction rand() g�n�re, par d�faut, la m�me suite de nombres: 41, 18467, 6334, 26500, 19169, 15724, ... , sans cycle apparent

	// �ventuellement, un nombre peut �tre choisi plusieurs fois
	
	for (int i = 0; i < 6; ++i)
		cout << rand() << endl;
	cout << endl;


	// EXEMPLE #2
	// ----------

	// La fonction srand(i) permet d'initialiser ou r�initialiser explicitement l'�tat de d�part du g�n�rateur rand()

	// Au d�marrage du programme, le g�n�rateur est initialis� implicitement avec la valeur 1 ==> srand(1);

	srand(1); // r�initialise l'�tat du g�n�rateur avec l'entier 1

	for (int i = 0; i < 6; ++i)		// reproduira la m�me liste que l'exemple #1
		cout << rand() << endl;
	cout << endl;


	// EXEMPLE #3
	// ----------

	// R�initialiser l'�tat du g�n�rateur avec un entier quelconque

	srand(3);	// Attention: le g�n�rateur rand() produira, � partir d'ici, une toute autre liste de nombre

	for (int i = 0; i < 6; ++i)
		cout << rand() << endl;

	_getch();
}