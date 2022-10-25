#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// G�N�RATION DE VALEURS (PSEUDO) AL�ATOIRES � L'INT�RIEUR D'UN DOMAINE PLUS RESTREINT

int main()
{
	srand(int(time(0)));

	// EXEMPLE #1
	// ----------

	// G�n�rer des nombres al�atoires entre: [0 .. 100]

	int n;
	for (int i = 0; i < 6; ++i)
	{
		n = rand() % 101;
		cout << n << endl;
	}
	cout << endl;


	// EXEMPLE #2
	// ----------

	// G�n�rer des nombres al�atoires entre: [167 .. 288]  ==>  [imin .. imax]

	const int imin = 167;
	const int imax = 288;

	for (int i = 0; i < 6; ++i)
	{
		n = rand() % (imax - imin + 1) + imin;
		cout << n << endl;
	}
	cout << endl;


	// EXEMPLE #3
	// ----------

	// G�n�rer des nombres al�atoires pairs entre: [0, 2, 4, .. , 20]

	for (int i = 0; i < 6; ++i)
	{
		n = rand() % 11 * 2;
		cout << n << endl;
	}
	cout << endl;


	// EXEMPLE #4
	// ----------

	// G�n�rer des valeurs al�atoires: [faux, vrai]

	string choix;
	for (int i = 0; i < 6; ++i)
	{
		choix = rand() % 2 ? "faux" : "vrai";
		cout << choix << endl;
	}


	_getch();
}