#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// L'INSTRUCTION BREAK

// l'instruction break permet de quitter abruptement l'instruction de r�p�tition englobante.

// - Son usage est conseill� seulement pour des cas sp�ciaux, il faut donc l'utiliser avec r�serve.

// - Un usage excessif de cette instruction peut rendre le code beaucoup plus difficile � lire.

int main()
{
	srand(int(time(0)));

	for (int i = 0; i < 10; ++i)	// Exemple: i < 10 est la condition NORMALE pour d�cider s'il faut r�p�ter ou terminer le for
	{
		// ...

		if ( i == (rand() % 20) )	// Exemple: i == (rand() % 20) serait ici une condition SP�CIALE quelconque pour terminer le for
		{
			break;					// break: sortie imm�diate du for englobant, sans faire la partie post-instructions (++i) du for
		}

		// ...
	}

	// lieu d'arriv� du break;

	_getch();
}