#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// ATTENTION � LA DUPLICATION DE CODE INUTILE

	bool expression;

	// 1a) Exemple d'�criture de code inutilement dupliqu�
	// ---------------------------------------------------

	// Soient D (d�but), I (if), E (else) et F (fin) des ensembles d'instructions quelconques

	if (expression)
	{
		// D
		// I
		// F
	}
	else
	{
		// D
		// E
		// F
	}


	// 1b) R��criture en �liminant la duplication de code  
	// --------------------------------------------------
		
	// D
	if (expression)
	{
		// I
	}
	else
	{
		// E
	}	
	// F


	_getch();
}