#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// EXEMPLE #1 -- RECHERCHER LA VALEUR MINIMUM D'UNE MATRICE M
	{
		int M[3][4] = { {43, -23, 6 , 0 }, { 12, -56, 3, -34 }, { 4, 99, -77, 88 } }, min;

		min = M[0][0];
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 4; ++j)
				if (M[i][j] < min)
					min = M[i][j];

		cout << "  Minimum = " << min << "\n\n";
	}


	// EXEMPLE #2 --  ADDITIONNER DEUX MATRICES ( M = A + B )
	{
		const int L = 2, C = 3;

		int A[L][C] = { { 43, -23, 6 }, { 12, -56, 3 } };
		int B[L][C] = { { 4, 99, -77 }, { 44, -90, 6 } };

		int M[L][C] = {};

		for (int l = 0; l < L; ++l)
			for (int c = 0; c < C; ++c)
				M[l][c] = A[l][c] + B[l][c];

		for (int l = 0; l < L; ++l)
		{
			for (int c = 0; c < C; ++c)
				cout << setw(4) << M[l][c] << " ";
			cout << endl;
		}
	}


	// EXEMPLE #3 --  CALCULER DES STATISTIQUES À PROPOS DES RÉSULTATS D'EXAMENS
	{
		const int ETUDIANTS = 5, COURS = 2, EXAMS = 3, STATS = 5, D = 8;

		double notes[ETUDIANTS][COURS][EXAMS] =
		{
			{ {77,50,80}, {73,60,62} },
			{ {61,82,99}, {85,73,65} },
			{ {79,66,81}, {56,71,55} },
			{ {85,62,78}, {63,51,72} },
			{ {69,56,98}, {62,95,92} }
		};

		const string stats_nm[STATS] = { "#E", "min", "max", "echecs", "moy" };

		double stats[ETUDIANTS][STATS] = { {1,100}, {2,100}, {3,100}, {4,100}, {5,100} };  // no, min, max, echecs, moy

		// CALCULS DES STATS

		for (int e = 0; e < ETUDIANTS; ++e)
		{
			for (int c = 0; c < COURS; ++c)
				for (int x = 0; x < EXAMS; ++x)
				{
					if (notes[e][c][x] < stats[e][1]) stats[e][1] = notes[e][c][x];	// min
					if (notes[e][c][x] > stats[e][2]) stats[e][2] = notes[e][c][x];	// max
					if (notes[e][c][x] < 60) stats[e][3]++;							// échecs
					stats[e][4] += notes[e][c][x];									// somme
				}
			stats[e][4] /= COURS * EXAMS;											// moyenne
		}

		// AFFICHAGE
		
		cout << right << fixed << setprecision(0) << endl << endl;
		
		// titre
		for (int s = 0; s < STATS; ++s)	cout << setw(D) << stats_nm[s]; cout << "\n\n";
		
		// stats
		for (int e = 0; e < ETUDIANTS; ++e)
		{
			for (int s = 0; s < STATS; ++s)	cout << setw(D) << stats[e][s];
			cout << "\n\n";
		}
	}

	_getch();
}