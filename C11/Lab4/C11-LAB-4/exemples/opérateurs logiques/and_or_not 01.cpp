#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// LES 3 OPÉRATEURS LOGIQUES: ET (AND), OU (OR), NÉGATION (NOT)
	// ------------------------------------------------------------

	//  &&	"et logique"
	//  ||	"ou logique"

	//  !	"négation logique"

	bool resultat;

	// TABLE DE VÉRITÉ DU ET LOGIQUE: &&			Note: le ET est "true" si les deux opérandes sont "true" , sinon il est "false"
	// ---------------------------------

	resultat = true  && true;	// resultat: true

	resultat = false && true;	// resultat: false
	resultat = true  && false;	// resultat: false
	resultat = false && false;	// resultat: false


	// TABLE DE VÉRITÉ DU OU LOGIQUE: ||			Note: le OU est "false" si les deux opérandes sont "false" , sinon il est "true"
	// ---------------------------------

	resultat = false || false;	// resultat: false

	resultat = false || true;	// resultat: true
	resultat = true  || false;	// resultat: true
	resultat = true  || true;	// resultat: true


	// TABLE DE VÉRITÉ DU NON LOGIQUE: !			Note: le NON inverse la valeur booléenne
	// ---------------------------------

	resultat = ! true;	// resultat: false
	resultat = ! false;	// resultat: true


	_getch();
}