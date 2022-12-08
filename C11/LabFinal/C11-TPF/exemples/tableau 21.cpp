#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

/*
	VARIABLE MULTIDIMENSIONNELLES: ( autres noms: "un Tableau à plusieurs dimensions" )


	A) DÉFINITION: Il est possible de définir, en une seule instruction, une serie de N variables, du même type,
	               et organisées avec le concept de "dimension".


		- Syntaxe de la définition :

			type nom [ D1 ];					// définition d'un tableau à 1 dimension: 	ici N variables où N = D1

			type nom [ D1 ] [ D2 ];				// définition d'un tableau à 2 dimensions	ici N variables où N = D1 x D2

			type nom [ D1 ] [ D2 ] [ D3 ];		// définition d'un tableau à 3 dimensions,	ici N variables où N = D1 x D2 x D3

			etc ...


		- D1, D2 et D3 sont les tailles de chacune des "dimensions"

		- la valeur de Dn doit être connu à la compilation, il s'agit donc d'une constante entière.


	B) ACCÈS: Pour accéder à une des variables de la série, il faut utiliser un indice pour chaque dimension
		
		- le premier indice : 0

		- le dernier indice : Dn - 1, où Dn est la taille de la nième dimension

		- l'indice peut être vu comme un déplacement (un delta) à partir du début de la série de variables


	C) EXEMPLES

		1) EXEMPLE DE TABLEAU À 1 DIMENSION


			int T[10];			// définition d'un tableau de 10 variables consécutives en mémoire

			[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
			 0  1  2  3  4  5  6  7  8  9
  						 |	
			T[4] --------|



		2) EXEMPLE DE TABLEAU À 2 DIMENSIONS


			int T[2][10];		// définition d'un tableau de 2 x 10 variables consécutives en mémoire

		
						 T[0]                            T[1]

			[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
			 0  1  2  3  4  5  6  7  8  9    0  1  2  3  4  5  6  7  8  9
												   |
												   |
			T[1][2] -------------------------------|



		3) EXEMPLE DE TABLEAU À 3 DIMENSIONS


			int T[2][3][6];		// définition d'un tableau de 2 x 3 x 6 variables consécutives en mémoire


									   T[0]                                                        T[1]

				  T[0][0]             T[0][1]             T[0][2]             T[1][0]             T[1][1]             T[1][2]

			[ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ]
			 0  1  2  3  4  5    0  1  2  3  4  5	 0  1  2  3  4  5    0  1  2  3  4  5	 0  1  2  3  4  5    0  1  2  3  4  5
																				  |
																				  |
			T[1][0][3] -----------------------------------------------------------|


*/


int main()
{
	// EXEMPLE #1 -- Définition du tableau à deux dimensions "matrice"
	{
		// Définition
		int matrice[3][5] = {};	// initialisation à zéro

		// Réinitialisation avec des valeurs aléatoires entre [0 .. 100]
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 5; ++j)
				matrice[i][j] = rand() % 101;

		// Affichage
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 5; ++j)
				cout << setw(5) << matrice[i][j];
			cout << endl;
		}
		cout << endl;

		// Affichage inversé
		for (int j = 0; j < 5; ++j)
		{
			for (int i = 0; i < 3; ++i)
				cout << setw(5) << matrice[i][j];
			cout << endl;
		}
	}


	// EXEMPLE #2 -- Initialisation lors de la définition
	{
		int T1[2][4] = { {} , { 5, 6, 7, 8} };

		int T2[5][2] = { {5, 6} , {}, {1, 2}, {8}, {} };

		int T3[2][3][2] =
		{
			{
				{1, 2},
				{3, 4},
				{5, 6}
			},

			{
				{7, 8},
				{9, 10},
				{11, 12}
			}
		};
	}

	_getch();
}