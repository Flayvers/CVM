#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// L'INSTRUCTION BREAK

// l'instruction break permet de quitter abruptement l'instruction de répétition englobante.

// - Son usage est conseillé seulement pour des cas spéciaux, il faut donc l'utiliser avec réserve.

// - Un usage excessif de cette instruction peut rendre le code beaucoup plus difficile à lire.

int main()
{
	srand(int(time(0)));

	for (int i = 0; i < 10; ++i)	// Exemple: i < 10 est la condition NORMALE pour décider s'il faut répéter ou terminer le for
	{
		// ...

		if ( i == (rand() % 20) )	// Exemple: i == (rand() % 20) serait ici une condition SPÉCIALE quelconque pour terminer le for
		{
			break;					// break: sortie immédiate du for englobant, sans faire la partie post-instructions (++i) du for
		}

		// ...
	}

	// lieu d'arrivé du break;

	_getch();
}