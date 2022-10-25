#include <iostream>
#include <conio.h>

using namespace std;

// GÉNÉRATION DE NOMBRES (PSEUDO) ALÉATOIRES (RANDOM)

// DEUX FONCTIONS:
//	1) rand()		-- le générateur de nombres
//	2) srand(i)		-- pour initiliser ou reinitialiser l'état de départ du générateur (seed random)

int main()
{
	// EXEMPLE #1
	// ----------

	// La fonction rand() choisi, à chaque appel, un nombre entier aléatoire dans l'intervalle: [0 .. 32767]

	// Une succession d'appels à la fonction rand() génère, par défaut, la même suite de nombres: 41, 18467, 6334, 26500, 19169, 15724, ... , sans cycle apparent

	// Éventuellement, un nombre peut être choisi plusieurs fois
	
	for (int i = 0; i < 6; ++i)
		cout << rand() << endl;
	cout << endl;


	// EXEMPLE #2
	// ----------

	// La fonction srand(i) permet d'initialiser ou réinitialiser explicitement l'état de départ du générateur rand()

	// Au démarrage du programme, le générateur est initialisé implicitement avec la valeur 1 ==> srand(1);

	srand(1); // réinitialise l'état du générateur avec l'entier 1

	for (int i = 0; i < 6; ++i)		// reproduira la même liste que l'exemple #1
		cout << rand() << endl;
	cout << endl;


	// EXEMPLE #3
	// ----------

	// Réinitialiser l'état du générateur avec un entier quelconque

	srand(3);	// Attention: le générateur rand() produira, à partir d'ici, une toute autre liste de nombre

	for (int i = 0; i < 6; ++i)
		cout << rand() << endl;

	_getch();
}