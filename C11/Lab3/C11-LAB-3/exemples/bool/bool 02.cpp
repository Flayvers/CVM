#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// VARIABLES
	int x = 10, y = 20, z = 10;
	bool resultat;

	// LES OP�RATEURS DE COMPARAISONS:

	//  <   plus petit
	//  <=  plus petit ou �gale

	//  >   plus grand
	//  >=  plus grand ou �gale

	//  ==  �gale					Attention: ne pas confondre avec "=" qui est l'op�rateur d'affectation ex: variable = expression
	//  !=  diff�rent
	
	// TESTS

	resultat = x < y;				// true
	cout << resultat << endl;

	resultat = x < z;				// false
	cout << resultat << endl;

	resultat = x <= z;				// true
	cout << resultat << endl;

	resultat = x != y;				// true
	cout << resultat << endl;

	resultat = x != z;				// false
	cout << resultat << endl;

	resultat = x == z;				// true
	cout << resultat << endl;

	resultat = (x * y) <= (z * z);	// false
	cout << resultat << endl;

	// AUTRES TESTS

	resultat = false;

	resultat = resultat == false;	// true
	cout << resultat << endl;

	resultat = resultat != true;	// false
	cout << resultat << endl;

	_getch();
}