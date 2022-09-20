#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple -- Erreur fréquente : un else avec le mauvais if
	// --------------------------------------------------------

	int age = 17;
	string État = "Ivresse";

	if (age >= 18)
		if (État == "Ivresse")
			cout << "stop: client rassasi\x82 !";

	else
		cout << "stop: client mineur !";

	cout << endl;

	// explication

	// le else se rapport toujours au plus proche if à moins de devoir franchir un bloc

	if (age >= 18)
		if (État == "Ivresse")
			cout << "stop: client rassasi\x82 !";

		else
			cout << "stop: client mineur !";

	cout << endl;


	// on peut forcer l'association en insérant un bloc

	if (age >= 18)
	{
		if (État == "Ivresse")
			cout << "stop: client rassasi\x82 !";
	}
	else
		cout << "stop: client mineur !";

	cout << endl;

	_getch();
}