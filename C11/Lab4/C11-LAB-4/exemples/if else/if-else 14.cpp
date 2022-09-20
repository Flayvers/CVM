#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple -- Erreur fr�quente : un else avec le mauvais if
	// --------------------------------------------------------

	int age = 17;
	string �tat = "Ivresse";

	if (age >= 18)
		if (�tat == "Ivresse")
			cout << "stop: client rassasi\x82 !";

	else
		cout << "stop: client mineur !";

	cout << endl;

	// explication

	// le else se rapport toujours au plus proche if � moins de devoir franchir un bloc

	if (age >= 18)
		if (�tat == "Ivresse")
			cout << "stop: client rassasi\x82 !";

		else
			cout << "stop: client mineur !";

	cout << endl;


	// on peut forcer l'association en ins�rant un bloc

	if (age >= 18)
	{
		if (�tat == "Ivresse")
			cout << "stop: client rassasi\x82 !";
	}
	else
		cout << "stop: client mineur !";

	cout << endl;

	_getch();
}