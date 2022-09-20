#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// ATTENTION À LA DUPLICATION DE CODE INUTILE

	bool expression;

	// 1a) Exemple d'écriture de code inutilement dupliqué
	// ---------------------------------------------------

	// Soient D (début), I (if), E (else) et F (fin) des ensembles d'instructions quelconques

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


	// 1b) Réécriture en éliminant la duplication de code  
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