#include <iostream>
#include <conio.h>

using namespace std;

// LES OP�RATEURS UNAIRES D'INCR�MENTATION ++ ET DE D�CR�MENTATION --

int main()
{
	// EXEMPLE

	//    Attention:  ==>  notez les syntaxes pr�fixe et postfixe
	
	int x = 1;

	cout << x << endl;		// affiche 1

	++ x;					// syntaxe pr�fixe : (++ variable) , augmente x de 1
	cout << x << endl;		// affiche 2

	x ++;					// syntaxe postfixe: (variable ++) , augmente x de 1;
	cout << x << endl;		// affiche 3

	-- x;					// syntaxe pr�fixe : (-- variable) , diminue x de 1;
	cout << x << endl;		// affiche 2

	x --;					// syntaxe postfixe: (variable --) , diminue x de 1;
	cout << x << endl;		// affiche 1

	cout << endl;


	// INCR�MENTATION

	// EXEMPLE , Syntaxe postfixe : ( variable ++ )

	//    Attention:  ==>  l'�valuation de ( variable ++ ) vaut la variable avant d'�tre augment�e de un
	
	int a = 10;

	cout << a++ << endl;	// affiche 10
	cout << a++ << endl;	// affiche 11

	cout << a << endl;		// affiche 12

	cout << endl;


	// EXEMPLE , Syntaxe pr�fixe : ( ++ variable )

	//    Attention:  ==>  l'�valuation de ( ++ variable ) vaut la variable apr�s avoir �t� augment�e de un

	int b = 10;

	cout << ++b << endl;	// affiche 11
	cout << ++b << endl;	// affiche 12

	cout << b << endl;		// affiche 12

	cout << endl;


	// IDEM POUR LA D�CR�MENTATION

	// EXEMPLE , Syntaxe postfixe : ( variable -- )

	//    Attention:  ==>  l'�valuation de ( variable -- ) vaut la variable avant d'�tre diminu�e de un

	int c = 10;

	cout << c-- << endl;	// affiche 10
	cout << c-- << endl;	// affiche 9

	cout << c << endl;		// affiche 8

	cout << endl;


	// EXEMPLE , Syntaxe pr�fixe : ( -- variable )

	//    Attention:  ==>  l'�valuation de ( -- variable ) vaut la variable apr�s avoir �t� diminu�e de un

	int d = 10;

	cout << --d << endl;	// affiche 9
	cout << --d << endl;	// affiche 8

	cout << d << endl;		// affiche 8

	cout << endl;


	// CES OP�RATEURS EXISTENT AUSSI SUR LES R�ELS

	double v = 2.2;

	cout << --v << endl;	// affiche 1.2
	cout << v++ << endl;	// affiche 1.2
	cout << ++v << endl;	// affiche 3.2
	cout << v-- << endl;	// affiche 3.2

	cout << v << endl;		// affiche 2.2


	_getch();
}