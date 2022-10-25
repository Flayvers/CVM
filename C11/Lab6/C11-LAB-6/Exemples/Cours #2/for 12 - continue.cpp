#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// L'INSTRUCTION CONTINUE

// l'instruction continue permet de terminer abruptement l'it�ration en cours pour passer � la suivante.

// - Son usage est conseill� seulement pour des cas sp�ciaux, il faut donc l'utiliser avec r�serve.

// - Un usage excessif de cette instruction peut rendre le code beaucoup plus difficile � lire.

int main()
{
	srand(int(time(0)));

	for (int i = 0; i < 10; ++i)	// Exemple: i < 10 est la condition NORMALE pour d�cider s'il faut r�p�ter ou terminer le for
	{
		// ...

		if ( i == (rand() % 20) )	// Exemple: i == (rand() % 20) serait ici une condition SP�CIALE quelconque pour terminer l'it�ration en cours
		{
			continue;				// continue: fin de l'it�ration en cours, retour imm�diat � la partie post-instructions (++i) du for
		}

		// ...
	}

	_getch();
}