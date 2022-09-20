#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	bool reponse;

	// A) PRIORITÉ DES OPÉRATEURS LOGIQUES ENTRE EUX

	//  !   plus prioritaire que  &&
	//  &&  plus prioritaire que  ||

	// Exemples générals
	// -----------------

	reponse = false || true && false;			// false || (true && false) ==> false

	reponse = true && false || true && true;	// (true && false) || (true && true) ==> true

	reponse = ! true || true && true;			// (! true) || (true && true) ==> true

	reponse = true && ! false || ! true;		// (true && (! false)) || (! true) ==> true


	// B) PRIORITÉ GÉNÉRALE DES OPÉRATEURS (du plus au moins prioritaire)

	//  ()

	//  !, "signe" +, "signe" -

	//  *, /

	//  +, -

	//  <, <=, >, >=

	//  ==, !=

	//  &&

	//  ||

	//  =


	// Exemples générals
	// -----------------

	int x = 10, y = 20, z = 10;

	reponse = x < 30 && y >= z * 2;

	reponse = x != z || y > z + 5 && ! (x == y);

	reponse = x < 30 && ! (y != 10) || 4 + - 5 * -2 >= z && x < z || ! ( z > x == x < y );

	_getch();
}