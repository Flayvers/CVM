#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

/*
	VARIABLE MULTIDIMENSIONNELLES: ( autres noms: "un Tableau � plusieurs dimensions" )


	A) D�FINITION: Il est possible de d�finir, en une seule instruction, une serie de N variables, du m�me type,
	               et organis�es avec le concept de "dimension".


		- Syntaxe de la d�finition :

			type nom [ D1 ];					// d�finition d'un tableau � 1 dimension: 	ici N variables o� N = D1

			type nom [ D1 ] [ D2 ];				// d�finition d'un tableau � 2 dimensions	ici N variables o� N = D1 x D2

			type nom [ D1 ] [ D2 ] [ D3 ];		// d�finition d'un tableau � 3 dimensions,	ici N variables o� N = D1 x D2 x D3

			etc ...


		- D1, D2 et D3 sont les tailles de chacune des "dimensions"

		- la valeur de Dn doit �tre connu � la compilation, il s'agit donc d'une constante enti�re.


	B) ACC�S: Pour acc�der � une des variables de la s�rie, il faut utiliser un indice pour chaque dimension
		
		- le premier indice : 0

		- le dernier indice : Dn - 1, o� Dn est la taille de la ni�me dimension

		- l'indice peut �tre vu comme un d�placement (un delta) � partir du d�but de la s�rie de variables


	C) EXEMPLES

		1) EXEMPLE DE TABLEAU � 1 DIMENSION


			int T[10];			// d�finition d'un tableau de 10 variables cons�cutives en m�moire

			[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
			 0  1  2  3  4  5  6  7  8  9
  						 |	
			T[4] --------|



		2) EXEMPLE DE TABLEAU � 2 DIMENSIONS


			int T[2][10];		// d�finition d'un tableau de 2 x 10 variables cons�cutives en m�moire

		
						 T[0]                            T[1]

			[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]  [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
			 0  1  2  3  4  5  6  7  8  9    0  1  2  3  4  5  6  7  8  9
												   |
												   |
			T[1][2] -------------------------------|



		3) EXEMPLE DE TABLEAU � 3 DIMENSIONS


			int T[2][3][6];		// d�finition d'un tableau de 2 x 3 x 6 variables cons�cutives en m�moire


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
	// EXEMPLE #1 -- D�finition du tableau � deux dimensions "matrice"
	{
		// D�finition
		int matrice[3][5] = {};	// initialisation � z�ro

		// R�initialisation avec des valeurs al�atoires entre [0 .. 100]
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

		// Affichage invers�
		for (int j = 0; j < 5; ++j)
		{
			for (int i = 0; i < 3; ++i)
				cout << setw(5) << matrice[i][j];
			cout << endl;
		}
	}


	// EXEMPLE #2 -- Initialisation lors de la d�finition
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