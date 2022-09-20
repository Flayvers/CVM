#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// LES 3 OP�RATEURS LOGIQUES: ET (AND), OU (OR), N�GATION (NOT)
	// ------------------------------------------------------------

	//  &&	"et logique"
	//  ||	"ou logique"

	//  !	"n�gation logique"

	bool resultat;

	// TABLE DE V�RIT� DU ET LOGIQUE: &&			Note: le ET est "true" si les deux op�randes sont "true" , sinon il est "false"
	// ---------------------------------

	resultat = true  && true;	// resultat: true

	resultat = false && true;	// resultat: false
	resultat = true  && false;	// resultat: false
	resultat = false && false;	// resultat: false


	// TABLE DE V�RIT� DU OU LOGIQUE: ||			Note: le OU est "false" si les deux op�randes sont "false" , sinon il est "true"
	// ---------------------------------

	resultat = false || false;	// resultat: false

	resultat = false || true;	// resultat: true
	resultat = true  || false;	// resultat: true
	resultat = true  || true;	// resultat: true


	// TABLE DE V�RIT� DU NON LOGIQUE: !			Note: le NON inverse la valeur bool�enne
	// ---------------------------------

	resultat = ! true;	// resultat: false
	resultat = ! false;	// resultat: true


	_getch();
}