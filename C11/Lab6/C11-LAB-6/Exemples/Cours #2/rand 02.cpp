#include <iostream>
#include <conio.h>
#include <ctime>	// pour la fonction time()

using namespace std;

// G�N�RATION DE NOMBRES (PSEUDO) AL�ATOIRES DIFF�RENTS D'UNE EX�CUTION � L'AUTRE

// Utilisation de la date (en secondes) pour initialiser le g�n�rateur

int main()
{
	// EXEMPLE #1
	// ----------

	// La fonction time(0) retourne la date en terme de secondes �coul�es depuis le 01/01/1970

	// Attention: la fonction time(0) est pr�cise � la seconde pr�s seulement


	time_t secondes = time(0);	// time_t est un alias � "long long"

	cout << secondes << " secondes depuis le 1 janvier 1970" << "\n\n";


	// EXEMPLE #2
	// ----------

	// Il est possible d'initialiser l'�tat du g�n�rateur avec le temps exprim� en secondes

	srand(int(secondes));

	int n;
	for (int i = 0; i < 6; ++i)
	{
		n = rand();
		cout << n << endl;
	}


	_getch();
}