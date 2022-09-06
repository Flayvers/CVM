/*

Auteur		: le prof
Description	: Programme qui calcule le montant taxé à partir d'un montant non taxé.
Input		: Le montant non taxé est inscrit dans la variable totalAvantTaxes. Les taux de taxes TVQ et TPS.
Output		: Les détails des taxes tps et tvq, et le total taxé totalApresTaxes.
Version		: 1.0

*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// CONSTANTES
	const double TVQ = 0.09975, TPS = 0.05; // taux de taxes

	// VARIABLES
	double totalAvantTaxes, tps, tvq, totalApresTaxes;

	// INPUT
	totalAvantTaxes = 100;

	// TRAITEMENTS
	tvq = totalAvantTaxes * TVQ;
	tps = totalAvantTaxes * TPS;
	totalApresTaxes = totalAvantTaxes + tvq + tps;

	// OUTPUT
	cout << endl;
	cout << "Montant sans les taxes : " << totalAvantTaxes << " $" ;
	cout << endl << endl;
	cout << "   tps : " << tps << " $";
	cout << endl << endl;
	cout << "   tvq : " << tvq << " $";
	cout << endl << endl;
	cout << "Montant avec les taxes : " << totalApresTaxes << " $";
	cout << endl;
	_getch();
}