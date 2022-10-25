#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

/*

L'INSTRUCTION FOR POUR LA RÉPÉTITION D'INSTRUCTIONS

A) L'instruction FOR permet de répéter en boucle les instructions de son bloc {}

for ( init ; condition ; post-instructions )
{
	instructions
}


B) Les différentes parties du FOR:

- la partie init permet de créer et initialiser des variables utiles à la boucle FOR
- la partie condition est une expression booléenne pour décider s'il faut exécuter le bloc d'instructions {} 
- la partie post-instructions permet de modifier (typiquement incrémenter ou décrémenter) les variables de la boucle FOR


C) Séquence d'exécution du FOR

1) Exécuter la partie init

2) Évaluer la condition
	true	==> exécuter le bloc { instructions }
			==> exécuter la partie post-instructions
			==> retour à 2)

	false	==> sortir du FOR

Notez que la condition pourrait être fausse dès le départ évitant l'exécution du bloc { instructions } même une fois

*/


int main()
{
	// Exemple #1 -- calculer la somme des n premiers nombre ==> 1 + 2 + 3 + ... (n-2) + (n-1) + n
	int somme = 0;
	for (int n = 1; n <= 100; ++n)
	{
		somme += n;
	}
	cout << somme << endl << endl;


	// Exemple #2 -- calculer la factorielle ==> n ! = n x (n-1) x (n-2) x ... x 3 x 2 x 1
	int fact = 1;
	for (int n = 10; n >= 1; --n)
	{
		fact *= n;
	}
	cout << fact << endl << endl;


	// Exemple #3 -- afficher une table de multiplication
	const int table = 12;
	for (int i = 0; i <= table; ++i)
	{
		cout << setw(2) << i << " x " << table << " = " << i * table << endl;
	}
	cout << endl;


	// Exemple #4 -- i est un nombre pair ou impair ?
	for (int i = 3; i <= 9; ++i)
	{
		cout << i << " est ";
		if (i % 2 == 1)
			cout << "impair";
		else
			cout << "pair";
		cout << endl;
	}
	cout << endl;


	// Exemple #5 -- afficher l'alphabet en majuscule
	for (char c = 'A'; c <= 'Z'; ++c)
	{
		cout << c;
	}
	cout << endl;


	_getch();
}