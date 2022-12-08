#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
	// EXEMPLE #1 -- Où faire son épicerie

	const int PERSONNES = 3, ÉPICERIES = 2, ALIMENTS = 4;


	const string aliments[ALIMENTS] = { "pain", "lait", "gateau", "beigne" };

	const double prix[ÉPICERIES][ALIMENTS] = { { 3.55, 5.35, 8.75, 6.45 } , { 5.55, 3.35, 7.75, 8.45 } };

	int commandes[PERSONNES][ALIMENTS] = { { 6, 5, 3, 1 }, { 3, 6, 2, 2 }, { 3, 4, 3, 6 } };


	double factures[PERSONNES][ÉPICERIES] = {};


	// ÉVALUATION

	for (int p = 0; p < PERSONNES; ++p)
	{
		for (int e = 0; e < ÉPICERIES; ++e)
		{
			for (int a = 0; a < ALIMENTS; ++a)
			{
				factures[p][e] += commandes[p][a] * prix[e][a];
			}
		}
	}


	// RAPPORT

	const int D = 12;	// pour l'affichage
	cout << right << fixed << setprecision(2) << "\n\n";

	// entête
	cout << setw(D) << "";
	for (int e = 0; e < ÉPICERIES; ++e)	cout << setw(D-1) << "Ep" << e+1 << "  ";
	cout << "\n\n";

	// résultats
	for (int p = 0; p < PERSONNES; ++p)
	{
		cout << setw(D-1) << "P" << p + 1;
		for (int e = 0; e < ÉPICERIES; ++e) cout << setw(D) << factures[p][e] << " $";
		cout << "\n\n";
	}

	_getch();
}