#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	// Exemple #1 - soulignement d'un texte
	// ------------------------------------

	string texte = "Introduction \x85 la programmation";

	cout << setfill('-');
	cout
		<< "\n"
		<< texte << "\n"
		<< setw(texte.size()) << "" << "\n\n";

	cout << setfill(' '); // remettre le caract�re de remplissage par d�faut


	// Exemple #2 - pr�sentation d'une facture
	// ---------------------------------------

	int x = 30;
	double T1 = 80.45, T2 = 56.12, T3 = 120.5;

	cout << left;
	cout << setfill('.'); // Permanant, remplace le caract�re de remplissage qui doit �tre utilis� dans le setw()

	cout
		<< "\n"
		<< "FACTURE" << "\n\n"
		<< setw(x) << "\x82picerie "	<< " " << T1 << " $" << "\n"
		<< setw(x) << "pharmacie "		<< " " << T2 << " $" << "\n"
		<< setw(x) << "saq "			<< " " << T3 << " $" << "\n\n"
		<< setw(x) << "TOTAL "			<< " " << T1 + T2 + T3 << " $" << "\n\n";

	_getch();
}