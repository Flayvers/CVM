#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// L'INSTRUCTION CONTINUE

// l'instruction continue permet de terminer abruptement l'itération en cours pour passer à la suivante.

// - Son usage est conseillé seulement pour des cas spéciaux, il faut donc l'utiliser avec réserve.

// - Un usage excessif de cette instruction peut rendre le code beaucoup plus difficile à lire.

int main()
{
	srand(int(time(0)));

	for (int i = 0; i < 10; ++i)	// Exemple: i < 10 est la condition NORMALE pour décider s'il faut répéter ou terminer le for
	{
		// ...

		if ( i == (rand() % 20) )	// Exemple: i == (rand() % 20) serait ici une condition SPÉCIALE quelconque pour terminer l'itération en cours
		{
			continue;				// continue: fin de l'itération en cours, retour immédiat à la partie post-instructions (++i) du for
		}

		// ...
	}

	_getch();
}