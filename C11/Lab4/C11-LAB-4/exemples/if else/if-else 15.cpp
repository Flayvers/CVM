#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string objet, mat�riel;
	double prix;

	cout << fixed << setprecision(2);


	// Exemple de cascade if-else
	// --------------------------

	objet = "menteau";
	mat�riel = "tissu";


	// A) �criture au style lourd
	// --------------------------

	if (objet == "sac" && mat�riel == "cuir")
		prix = 100.00;
	else if (objet == "sac" && mat�riel == "tissu")
		prix = 35.00;
	else if (objet == "valise" && mat�riel == "cuir")
		prix = 500.00;
	else if (objet == "valise" && mat�riel == "tissu")
		prix = 250.00;
	else if (objet == "menteau" && mat�riel == "cuir")
		prix = 400.00;
	else if (objet == "menteau" && mat�riel == "tissu")
		prix = 200.00;
	else
		prix = 0.00;

	cout << "le prix de votre " << objet << " en " << mat�riel << " est de " << prix << " $" << endl;


	// B) R��criture avec style am�lior�
	// ---------------------------------

	prix = 0.00;
	if (objet == "sac")
	{
		if (mat�riel == "cuir")
			prix = 100.00;
		else if (mat�riel == "tissu")
			prix = 35.00;
	}
	else if (objet == "valise")
	{
		if (mat�riel == "cuir")
			prix = 500.00;
		else if (mat�riel == "tissu")
			prix = 250.00;
	}
	else if (objet == "menteau")
	{
		if (mat�riel == "cuir")
			prix = 400.00;
		else if (mat�riel == "tissu")
			prix = 200.00;
	}

	cout << "le prix de votre " << objet << " en " << mat�riel << " est de " << prix << " $" << endl;


	// C) R��criture avec style am�lior�
	// ---------------------------------

	prix = 0.00;
	if (mat�riel == "cuir")
	{
		if (objet == "sac")
			prix = 100.00;
		else if (objet == "valise")
			prix = 500.00;
		else if (objet == "menteau")
			prix = 400.00;
	}
	else if (mat�riel == "tissu")
	{
		if (objet == "sac")
			prix = 35.00;
		else if (objet == "valise")
			prix = 250.00;
		else if (objet == "menteau")
			prix = 200.00;
	}

	cout << "le prix de votre " << objet << " en " << mat�riel << " est de " << prix << " $" << endl;

	_getch();
}