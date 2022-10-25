#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

// RÉUTILISATION DU TEST DE PRIMALITÉ EN BOUCLE POUR TROUVER UNE SUITE DE NOMBRES PREMIERS

int main()
{
	// CONSTANTES
	const uint64_t DEB = 0;		// Débuter la recherche des nombres premiers à partir de cette limite inférieure
	const uint64_t MAX = 25;	// Quantité de nombres premiers à trouver

	int w = int(log10(MAX)+1);	// pour l'affichage

	// VARIABLES
	bool estPremier;
	uint64_t n, d, cnt;

	// RECHERCHE
	for (cnt = 1, n = DEB; cnt <= MAX; ++n)
	{
		// VÉRIFICATION
		estPremier = false;
		if ( (n == 2) || (n > 2 && n % 2 == 1 ) )
		{
			estPremier = true;
			for (d = 3; d <= sqrt(n); d += 2)
				if (n % d == 0)
				{
					estPremier = false;
					break;
				}
		}

		// VERDICT
		if (estPremier)
			cout << setw(w) << cnt++ << " - " << n << endl;
	}

	_getch();
}