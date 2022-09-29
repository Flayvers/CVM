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

	// var etape 1
	char formatPapier;
	char typeImpression;
	int nbOri;
	int nbExe;
	int nbImpR;
	int nbImpRV;
	int reste;

	// const etape 2
	const double PRIX_8x11R = 31;
	const double PRIX_8x11RV = 60;
	const double PRIX_11x17R = 61;
	const double PRIX_11x17RV = 100;
	// var etape 2
	double coutR;
	double coutRV;

	// const etape 3
	const double PRIX_PAPIER_1 = 20.50;
	const double PRIX_PAPIER_2 = 67.34;
	const double PRIX_PAPIER_3 = 122.94;
	// var etape 3
	char typePapier;
	double coutPapier;

	//const etape 4
	const double PRIX_BROCHE = 0.03;
	const double PRIX_ENCOLLER = 0.6;
	const double PRIX_TABLETTE = 0.35;
	const double PRIX_DOSCHEVAL = 0.10;
	const double PRIX_PERFORER = 3;
	// var etape 4
	char aPerforer;
	char typeFaconnage;
	double coutFaconnage;

	//const etape 5
	const double TPS = 0.05;
	const double TVQ = 0.09975;
	// var etape 5
	double coutProduction;
	double coutTotal;

	cout << left <<setw(36) << "Nombre d'originaux" << ": ";
	cin >> nbOri;
	cout << setw(36) << "Nombre d'exemplaires à reproduire" << ": ";
	cin >> nbExe;

	cout << "Format du papier :"  << endl
		 << setw(8) << ""				<< "1. 8½x11" << endl
		 << setw(8) << ""				<< "2. 8½x14" << endl
		 << setw(8) << "" << setw(37)	<< "3. 11x17" << "Votre choix : ";
	formatPapier = _getch();
	cout << formatPapier << endl << endl;

	cout << "Type d'impression :" << endl
		 << setw(8) << ""				<< "R. recto" << endl
		 << setw(8) << "" << setw(37)	<< "V. recto - verso" << "Votre choix : ";
	typeImpression = toupper(_getch());
	cout << typeImpression << endl << endl;

	cout << "Format du papier :" << endl
		 << setw(8) << ""				<< "1. Repro + gris" << endl
		 << setw(8) << ""				<< "2. Rolland évolution glacier" << endl
		 << setw(8) << "" << setw(37)	<< "3. Wausau royal, fibre texte étain" << "Votre choix : ";
	typePapier = _getch();
	cout << typePapier << endl << endl;

	cout << setw(45) << "Voulez-vous des documents perforés ? (O/N)" << "Votre choix : ";
	aPerforer = toupper(_getch());
	cout << aPerforer << endl << endl;

	cout << "Format du papier :" << endl
		 << setw(8) << ""				<< "1. Broche en coin" << endl
		 << setw(8) << ""				<< "2. Encoller avec ruban" << endl
		 << setw(8) << ""				<< "3. Tablettes" << endl
		 << setw(8) << ""				<< "4. Broche à dos de cheval" << endl
		 << setw(8) << "" << setw(44)	<< "5. Aucun" << "Votre choix : ";
	typeFaconnage = _getch();
	cout << typeFaconnage << endl << endl << endl;

	cout << "Appuyez sur une touche pour continuer ...";
	_getch();
	clrscr();

	switch (formatPapier)
	{
	case '1':
	case '2':
		switch (typeImpression)
		{
		case 'R':
			nbImpR = nbOri * nbExe;
			nbImpRV = 0;
		case 'V':
			if (nbOri % 2 == 1)
			{
				nbImpR = nbExe;
				nbImpRV = (nbOri - 1) * nbExe / 2;
			}
			else
			{
				nbImpR = 0;
				nbImpRV = nbOri * nbExe / 2;
			}
		}
		coutR = PRIX_8x11R / 1000 * nbImpR;
		coutRV = PRIX_8x11RV / 1000 * nbImpRV;
		break;
	case '3':
		switch (typeImpression)
		{
		case 'R':
			if (nbOri % 2 == 1)
			{
				nbOri = nbOri + 1;
				nbImpR = nbOri * nbExe / 2;
				nbImpRV = 0;
			}
			break;
		case 'V':
			reste = nbOri % 4;
			if(reste == 0)
			{
				nbImpR = 0;
				nbImpRV = nbOri * nbExe / 4;
			}
			else if(reste == 1 || reste == 2)
			{
				nbImpR = nbExe;
				nbImpRV = (nbOri - reste) * nbExe / 4;
			}
			else if (reste == 3)
			{
				nbImpR = 0;
				nbImpRV = (nbOri + 1) * nbExe / 4;
			}
			break;
		default:
			cout << "informaton erronée";
			exit(-1);
		}
		coutR = PRIX_11x17R / 1000 * nbImpR;
		coutRV = PRIX_11x17RV / 1000 * nbImpRV;
		break;
	default:
		cout << "informaton erronée";
		exit(-1);
	}






	cout << endl << endl << endl << endl
		 << "FACTURE"
		 << endl << endl << endl;

	cout << setw(34) << " Coût des impressions recto :" << setw(26) << coutR << endl;
	cout << setw(34) << "Coût des impressions recto-verso :" << setw(26) << coutRV << endl << endl;

	/*cout << setw(34) << " Coût du papier :" << setw(26) << coutPapier << endl;
	cout << setw(34) << " Coût du façonnage :" << setw(26) << coutFaconnage << endl << endl; 
	cout << setw(34) << "" << setw(26) << "------------" << endl;

	cout << setw(34) << " Coût de production :" << setw(26) << coutProduction << endl << endl;
	cout << setw(34) << "" << setw(26) << "============" << endl;

	cout << setw(34) << "Coût total :" << coutTotal;*/

	_getch();
}