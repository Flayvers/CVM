#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	bool condition = true;

	// Exemple -- Erreur fr�quente : le point virgule apr�s un if
	// --------------------------------------------------------

	if (condition) ;
	{
		cout << "condition vraie !";
	}
	else
	{
		cout << "condition fausse !";
	}


	; // Attention: le ; seul est l'instruction vide !!

	
	// Interpr�tation du compilateur

	if (condition)  // un if sans else avec l'instruction vide quand la condition est true
		;
	

	{
		cout << "condition vraie !";  // un bloc d'instruction
	}


	else // else inattendu ici
	{
		cout << "condition fausse !";
	}


	_getch();
}