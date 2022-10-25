#include <iostream>
#include <conio.h>

using namespace std;

// LES OPÉRATEURS UNAIRES D'INCRÉMENTATION ++ ET DE DÉCRÉMENTATION --

int main()
{
	// EXEMPLE

	//    Attention:  ==>  notez les syntaxes préfixe et postfixe
	
	int x = 1;

	cout << x << endl;		// affiche 1

	++ x;					// syntaxe préfixe : (++ variable) , augmente x de 1
	cout << x << endl;		// affiche 2

	x ++;					// syntaxe postfixe: (variable ++) , augmente x de 1;
	cout << x << endl;		// affiche 3

	-- x;					// syntaxe préfixe : (-- variable) , diminue x de 1;
	cout << x << endl;		// affiche 2

	x --;					// syntaxe postfixe: (variable --) , diminue x de 1;
	cout << x << endl;		// affiche 1

	cout << endl;


	// INCRÉMENTATION

	// EXEMPLE , Syntaxe postfixe : ( variable ++ )

	//    Attention:  ==>  l'évaluation de ( variable ++ ) vaut la variable avant d'être augmentée de un
	
	int a = 10;

	cout << a++ << endl;	// affiche 10
	cout << a++ << endl;	// affiche 11

	cout << a << endl;		// affiche 12

	cout << endl;


	// EXEMPLE , Syntaxe préfixe : ( ++ variable )

	//    Attention:  ==>  l'évaluation de ( ++ variable ) vaut la variable après avoir été augmentée de un

	int b = 10;

	cout << ++b << endl;	// affiche 11
	cout << ++b << endl;	// affiche 12

	cout << b << endl;		// affiche 12

	cout << endl;


	// IDEM POUR LA DÉCRÉMENTATION

	// EXEMPLE , Syntaxe postfixe : ( variable -- )

	//    Attention:  ==>  l'évaluation de ( variable -- ) vaut la variable avant d'être diminuée de un

	int c = 10;

	cout << c-- << endl;	// affiche 10
	cout << c-- << endl;	// affiche 9

	cout << c << endl;		// affiche 8

	cout << endl;


	// EXEMPLE , Syntaxe préfixe : ( -- variable )

	//    Attention:  ==>  l'évaluation de ( -- variable ) vaut la variable après avoir été diminuée de un

	int d = 10;

	cout << --d << endl;	// affiche 9
	cout << --d << endl;	// affiche 8

	cout << d << endl;		// affiche 8

	cout << endl;


	// CES OPÉRATEURS EXISTENT AUSSI SUR LES RÉELS

	double v = 2.2;

	cout << --v << endl;	// affiche 1.2
	cout << v++ << endl;	// affiche 1.2
	cout << ++v << endl;	// affiche 3.2
	cout << v-- << endl;	// affiche 3.2

	cout << v << endl;		// affiche 2.2


	_getch();
}