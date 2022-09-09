#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	// CONSTANTES
	const int MAX = 100;	// vitesse maximum en km
	
	// VARIABLES
	int vitesse;			// vitesse constatée en km
	int peine;				// montant de la peine en $
	string infraction;		// type d'infraction

	// INPUT
	cout << "Vitesse constat\202e : ";
	cin >> vitesse;

	// VÉRIFIER S'IL FAUT PRODUIRE UNE CONTRAVENTION 
	if (vitesse > MAX)
	{
		peine = (vitesse - MAX) * 10;
		infraction = "Exc\x8as de vitesse";
	}
	else
	{
		peine = 0;
		infraction = "aucune";
	}

	// RÉSULTAT
	cout << "\n" << left<< setw(18) << "Infraction" << ": " << infraction << "\n";
	if (peine > 0)
	{
		cout << setw(18) << "Montant r\202clam\202" << ": " << peine << " $";
	}

	_getch();
}