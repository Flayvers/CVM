#include <iostream>
#include <conio.h>

using namespace std;

// EXEMPLES DE STRUCTURE DE DONNÉES AVEC LES TABLEAUX À UNE DIMENSION

int main()
{
	// EXEMPLE #1 -- 5 tableaux pour les notes de 5 travaux de (E=10) élèves
	{
		const int E = 10;		// nombres d'élèves

		int notes_T1[E] = {};	// notes du travail #1
		int notes_T2[E] = {};	// notes du travail #2
		int notes_T3[E] = {};	// notes du travail #3
		int notes_T4[E] = {};	// notes du travail #4
		int notes_T5[E] = {};	// notes du travail #5


		// a) quelle est la note du travail #2 de l'élève #1
		int t = 2, e = 1;

		// b) calcul pour s'y rendre
		switch (t)
		{
			case 2:
				cout << notes_T2[e - 1]; break;

			// ... etc
		}
	}


	// EXEMPLE #2 -- 1 tableau pour toutes les notes de (T=5) travaux de (E=10) élèves
	{
		const int T = 5;		// nombres de travaux
		const int E = 10;		// nombres d'élèves

		int notes[T*E] = {};	// un tableau avec toutes les notes


		// a) quelle est la note du travail #2 de l'élève #1
		int t = 2, e = 1;

		// b) calcul our s'y rendre
		cout << notes[(t - 1) * E + (e - 1)];
	}


	// EXEMPLE #3 -- 1 tableau pour toutes les notes de (C=5) classes de (T=5) travaux de (E=10) élèves
	{
		const int C = 2;		// nombres de classes
		const int T = 5;		// nombres de travaux
		const int E = 10;		// nombres d'élèves

		int notes[C*T*E] = {};	// un tableau avec toutes les notes


		// a) quelle est la note du travail #2 de l'élève #1 de la classe #2
		int  c = 2, t = 2, e = 1;

		// calcul pour s'y rendre
		cout << notes[(c - 1) * (E * T) + (t - 1) * E + (e - 1)];
	}

	_getch();
}