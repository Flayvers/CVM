#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// CONSTANTES
	const double TVQ = 0.09975, TPS = 0.05; // taux de taxes

	// VARIABLES
	double totalAvantTaxes, tps, tvq, totalApresTaxes;

	// INPUT
	totalApresTaxes = 235;

	// TRAITEMENTS
	//
	totalAvantTaxes = totalApresTaxes / (1 + TVQ + TPS);
	tps = totalAvantTaxes * TPS;
	tvq = totalAvantTaxes * TVQ;

	// OUTPUT
	cout << endl;
	cout << "Montant avec les taxes : " << totalApresTaxes << " $";
	cout << endl << endl;
	cout << "   tps : " << tps << " $";
	cout << endl << endl;
	cout << "   tvq : " << tvq << " $";
	cout << endl << endl;
	cout << "Montant sans les taxes : " << totalAvantTaxes << " $";
	cout << endl;
	_getch();
	return 0;
}
