#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string objet, matériel;
	double prix;

	cout << fixed << setprecision(2);


	// Exemple de cascade if-else
	// --------------------------

	objet = "menteau";
	matériel = "tissu";


	// A) Écriture au style lourd
	// --------------------------

	if (objet == "sac" && matériel == "cuir")
		prix = 100.00;
	else if (objet == "sac" && matériel == "tissu")
		prix = 35.00;
	else if (objet == "valise" && matériel == "cuir")
		prix = 500.00;
	else if (objet == "valise" && matériel == "tissu")
		prix = 250.00;
	else if (objet == "menteau" && matériel == "cuir")
		prix = 400.00;
	else if (objet == "menteau" && matériel == "tissu")
		prix = 200.00;
	else
		prix = 0.00;

	cout << "le prix de votre " << objet << " en " << matériel << " est de " << prix << " $" << endl;


	// B) Réécriture avec style amélioré
	// ---------------------------------

	prix = 0.00;
	if (objet == "sac")
	{
		if (matériel == "cuir")
			prix = 100.00;
		else if (matériel == "tissu")
			prix = 35.00;
	}
	else if (objet == "valise")
	{
		if (matériel == "cuir")
			prix = 500.00;
		else if (matériel == "tissu")
			prix = 250.00;
	}
	else if (objet == "menteau")
	{
		if (matériel == "cuir")
			prix = 400.00;
		else if (matériel == "tissu")
			prix = 200.00;
	}

	cout << "le prix de votre " << objet << " en " << matériel << " est de " << prix << " $" << endl;


	// C) Réécriture avec style amélioré
	// ---------------------------------

	prix = 0.00;
	if (matériel == "cuir")
	{
		if (objet == "sac")
			prix = 100.00;
		else if (objet == "valise")
			prix = 500.00;
		else if (objet == "menteau")
			prix = 400.00;
	}
	else if (matériel == "tissu")
	{
		if (objet == "sac")
			prix = 35.00;
		else if (objet == "valise")
			prix = 250.00;
		else if (objet == "menteau")
			prix = 200.00;
	}

	cout << "le prix de votre " << objet << " en " << matériel << " est de " << prix << " $" << endl;

	_getch();
}