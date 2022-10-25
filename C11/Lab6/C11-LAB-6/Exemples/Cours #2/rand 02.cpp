#include <iostream>
#include <conio.h>
#include <ctime>	// pour la fonction time()

using namespace std;

// GÉNÉRATION DE NOMBRES (PSEUDO) ALÉATOIRES DIFFÉRENTS D'UNE EXÉCUTION À L'AUTRE

// Utilisation de la date (en secondes) pour initialiser le générateur

int main()
{
	// EXEMPLE #1
	// ----------

	// La fonction time(0) retourne la date en terme de secondes écoulées depuis le 01/01/1970

	// Attention: la fonction time(0) est précise à la seconde près seulement


	time_t secondes = time(0);	// time_t est un alias à "long long"

	cout << secondes << " secondes depuis le 1 janvier 1970" << "\n\n";


	// EXEMPLE #2
	// ----------

	// Il est possible d'initialiser l'état du générateur avec le temps exprimé en secondes

	srand(int(secondes));

	int n;
	for (int i = 0; i < 6; ++i)
	{
		n = rand();
		cout << n << endl;
	}


	_getch();
}