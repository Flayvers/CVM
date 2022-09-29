#include <iostream>
#include <conio.h>

using namespace std;

// UTILISATION DE L'OPÉRATEUR CONDITIONNEL --  exp_bool ? exp_1 : exp_2

// note: exp_1 et exp_2 doivent être du même type


int main ()
{
	int nbVoituresMoy = 0;

	// Exemple #1
	// ----------

	// Pour accorder un mot au pluriel

	// A) Avec une instruction if

	cout << "Les familles poss\212dent en moyenne " << nbVoituresMoy << " voiture";
	if (nbVoituresMoy >= 2)
		cout << "s";		// pour le pluriel
	cout << "\n\n";

	// B) Avec l'opérateur conditionnel ( exp_bool ? exp_1 : exp_2 )

	cout
		<< "Les familles poss\212dent en moyenne "
		<< nbVoituresMoy
		<< " voiture"
		<< ( nbVoituresMoy >= 2 ? "s" : "" ) // pour le pluriel, les parenthèses sont obligatoires ici dû à la priorité des opérateurs
		<< "\n\n";


	// Exemple #2
	// ----------

	int a = 2, b = 7, max;

	max = a > b ? a : b;

	cout << "max = " << max << "\n\n";


	_getch();
}