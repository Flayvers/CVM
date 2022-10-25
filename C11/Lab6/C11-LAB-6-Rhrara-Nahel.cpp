#include <iostream>
#include <iomanip>
#include <conio.h>
#include "../CVM_LIB/cvm 21.h"

using namespace std;

int main()
{
	setcp(1252);

	const int SPACE1 = 4;
	const int SPACE2 = 13;
	const int SPACE3 = 16;
	int des;
	int resultat1;
	int resultat2;
	int resultat3;
	int resultat4;
	int resultat5;
	int resultat6;
	int total = 0;
	int x = 1;

	srand(int(time(0)));

	for (int i = 0; i < 7; i++)
	{ 
		clrscr();
		resultat1 = 0;
		resultat2 = 0;
		resultat3 = 0;
		resultat4 = 0;
		resultat5 = 0;
		resultat6 = 0;

		cout << endl;
		cout << "Expérience aléatoire avec " << x <<  " lancer";
		cout << right << endl << endl;
		cout << setw(SPACE1) << "Face" << setw(SPACE2) << "Fréquence" << setw(SPACE3) << "Distribution" << endl;
		for (int j = 0; j < x; j++)
		{
			des = rand() % 6 + 1;
			switch (des)
			{
			case 1:
				resultat1++;
				break;
			case 2:
				resultat2++;
				break;
			case 3:
				resultat3++;
				break;
			case 4:
				resultat4++;
				break;
			case 5:
				resultat5++;
				break;
			case 6:
				resultat6++;
				break;
			default:
				cout << "erreur";
			}
		}
		total += x;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat1 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat1 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat2 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat2 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat3 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat3 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat4 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat4 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat5 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat5 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "1" << setw(SPACE2) << setprecision(-1) << resultat6 << setw(SPACE3) << fixed << setprecision(2) << (double)resultat6 * 100 / x << " %" << endl;
		cout << setw(SPACE1) << "" << setw(SPACE2) << "--------" << setw(SPACE3) << "--------" << endl;
		cout << setw(SPACE1) << "" << setw(SPACE2) << x << setw(SPACE3) << "" << endl << endl;
		cout << "Statistiques cumulatives après " << i << " expériences" << endl << endl;
		cout << "==> " << total << " lancers";
		cout << endl << endl << endl << endl << endl;
		if (i < 6)
			cout << "Appuyez sur une touche pour effectuer l'expérience suivante ...";
		else
			cout << "A U   R E V O I R  !";
		_getch();
		x *= 10;
	}

}