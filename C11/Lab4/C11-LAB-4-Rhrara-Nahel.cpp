#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "..\CVM_LIB\cvm 21.h"
//#include "..\cvm 21.h"

using namespace::std;

int main()
{
	setcp(1252);

	const double DOLLAR = 1.31674;
	const double EURO = 1.31357;
	const double BAHT = 0.03597;
	const double ROUPIE = 0.01657;
	const double COURONNE = 0.17666;

	char deviseInitial;
	char deviseConversion;
	double montantInitial;
	double montantConverti;
	double montantCanadien;

	cout << "Entrez le montant à convertir : ";
	cin >> montantInitial;
	cout << endl;
	cout << "Entrez la devise de ce montant :" << endl
		 << endl
		 << setw(4) << "" << left << setw(20) << "$ -> Dollar"		<< "(Canada)" << endl
		 << setw(4) << "" << left << setw(20) << "D -> Dollar"		<< "(États - unis)" << endl
		 << setw(4) << "" << left << setw(20) << "E -> Euro"		<< "(Union Européenne)" << endl
		 << setw(4) << "" << left << setw(20) << "B -> Baht"		<< "(Thaïlande)" << endl
		 << setw(4) << "" << left << setw(20) << "R -> Roupie"		<< "(Inde)" << endl
		 << setw(4) << "" << left << setw(20) << "C -> Couronne"	<< "(Danemark)                Votre choix : ";
	deviseInitial = toupper(_getch());

	if (deviseInitial != 'D' && deviseInitial != 'E' && deviseInitial != 'B' && deviseInitial != 'R' && deviseInitial != 'C')
		deviseInitial = '$';
	cout << deviseInitial;

	cout << endl << endl;

	cout << "Entrez la devise dans laquelle on fera la conversion :" << endl
		 << endl
		 << setw(4) << "" << left << setw(20) << "$ -> Dollar"		<< "(Canada)" << endl
		 << setw(4) << "" << left << setw(20) << "D -> Dollar"		<< "(États - unis)" << endl
	 	 << setw(4) << "" << left << setw(20) << "E -> Euro"		<< "(Union Européenne)" << endl
		 << setw(4) << "" << left << setw(20) << "B -> Baht"		<< "(Thaïlande)" << endl
		 << setw(4) << "" << left << setw(20) << "R -> Roupie"		<< "(Inde)" << endl
		 << setw(4) << "" << left << setw(20) << "C -> Couronne"	<< "(Danemark)                Votre choix : ";
	deviseConversion = toupper(_getch());

	if (deviseConversion != 'D' && deviseConversion != 'E' && deviseConversion != 'B' && deviseConversion != 'R' && deviseConversion != 'C')
		deviseConversion = '$';
	cout << deviseConversion;

	if (deviseInitial == 'D')
		montantCanadien = montantInitial * DOLLAR;
	else if (deviseInitial == 'E')
		montantCanadien = montantInitial * EURO;
	else if (deviseInitial == 'B')
		montantCanadien = montantInitial * BAHT;
	else if (deviseInitial == 'R')
		montantCanadien = montantInitial * ROUPIE;
	else if (deviseInitial == 'C')
		montantCanadien = montantInitial * COURONNE;
	else
		montantCanadien = montantInitial;


	if (deviseConversion == 'D')
		montantConverti = montantCanadien / DOLLAR;
	else if (deviseConversion == 'E')
		montantConverti = montantCanadien / EURO;
	else if (deviseConversion == 'B')
		montantConverti = montantCanadien / BAHT;
	else if (deviseConversion == 'R')
		montantConverti = montantCanadien / ROUPIE;
	else if (deviseConversion == 'C')
		montantConverti = montantCanadien / COURONNE;
	else
		montantConverti = montantCanadien;

	cout << endl << endl << endl << fixed << setprecision(2);
	cout << "Montant initial  :" << right << setw(15) << montantInitial << " " << deviseInitial;
	cout << endl << endl;
	cout << "Montant converti :" << right << setw(15) << montantConverti << " " << deviseConversion;
	_getch();
}
