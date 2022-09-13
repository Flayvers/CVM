#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include ".\cvm 21.h"

using namespace::std;

int main()
{
	const double TPS = 0.05;
	const double TVQ = 0.09975;
	const double TARIFPARJOUR = 0.42238;
	const double TARIF_1 = 0.06319;
	const double TARIF_2 = 0.09749;
	const string TITRE = "HYDRO QU\220BEC";

	string nom;
	string prenom;

	unsigned int nbKwHres;
	unsigned int nbJour;
	unsigned int nbKwH_tarif_1;
	unsigned int nbKwH_tarif_2;
	double redevance;
	double prix_1;
	double prix_2;
	double tps;
	double tvq;
	double totalFacture;

	cout << setw(((120 - TITRE.size()) / 2) + TITRE.size()) << right << TITRE;
	cout << endl << endl << endl << endl;
	cout << left << setw(41) << "Quel est votre pr\x82nom" << ": ";
	getline(cin, prenom);
	cout << endl;
	cout << left << setw(41) << "Quel est votre nom" << ": ";
	getline(cin, nom);
	cout << endl << endl;
	cout << left << setw(41) << "Quelle est votre consommation en kWh" << ": ";
	cin >> nbKwHres;
	cout << endl;
	cout << left << setw(41) << "Sur combien de jours" << ": ";
	cin >> nbJour;
	cout << endl << endl << endl;
	cout << setw(24) << "" << "Appuyez sur une touche pour continuer";
	_getch();

	clrscr();
	if (nbKwHres > 40 * nbJour)
	{
		prix_1 = TARIF_1 * (40 * nbJour);
		prix_2 = TARIF_2 * (nbKwHres - (40 * nbJour));
		nbKwH_tarif_1 = 40 * nbJour;
		nbKwH_tarif_2 = nbKwHres - (40 * nbJour);
	}
	else
	{
		prix_1 = TARIF_1 * nbKwHres;
		prix_2 = 0;
		nbKwH_tarif_1 = nbKwHres;
		nbKwH_tarif_2 = 0;
	}
	redevance = nbJour * TARIFPARJOUR;
	tps = (prix_1 + prix_2 + redevance) * TPS;
	tvq = (prix_1 + prix_2 + redevance) * TVQ;
	totalFacture = prix_1 + prix_2 + redevance + tps + tvq;

	cout << setw(((120 - TITRE.size()) / 2) + TITRE.size()) << right << TITRE;
	cout << endl << endl << endl;
	cout << "FACTURE D'\220LECTRICIT\220 DE : " << prenom << " " << nom;
	cout << endl << endl << endl;

	cout << left << setw(30) << "REDEVANCE D'ABONNEMENT:" 
		<< fixed << setprecision(2) << right << setw(15) << redevance
		<< " $    " << nbJour << " jour(s) x " 
		<< fixed << setprecision(5) << TARIFPARJOUR << " $";
	cout << endl << endl << endl;

	cout << left << setw(51) << "CONSOMMATION:" << nbKwHres << " kWh";

	cout << endl << endl;

	cout << left << setw(30) << "  Les 40 premiers kWh\\jour:" 
		 << fixed << setprecision(2) << right << setw(15) << prix_1
		 << " $    " << nbKwH_tarif_1 << " kWh x "
		 << fixed << setprecision(5) << TARIF_1 << " $";;

	cout << endl << endl;

	cout << left << setw(30) << "  Le reste de la consommation:"
		 << fixed << setprecision(2) << right << setw(15) << prix_2
		 << " $    " << nbKwH_tarif_2 << " kWh x " 
		 << fixed << setprecision(5) << TARIF_2 << " $";;

	cout << endl << endl << endl;

	cout << left << setw(30) << "TPS:"
		<< fixed << setprecision(2) << right << setw(15) << tps << " $    " << "5 %";

	cout << endl << endl;

	cout << left << setw(30) << "TVQ:"
		<< fixed << setprecision(2) << right << setw(15) << tvq << " $    " << "9.975 %";

	cout << endl << endl;
	
	cout << right << setw(47) << "---------------";
	cout << endl;
	cout << left << setw(30) << "TOTAL:" << right << setw(15) << totalFacture << " $";
	_getch();
}