#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{	
	// Exemple #1 - if sans la clause else
	// ------------------------------------

	int age = 20;
	if (age >= 18)
	{
		cout << age << " ans vous autorise \x85 fr\x82quenter la SAQ !" << endl;
	}


	// Exemple #2 - if avec une clause else
	// ------------------------------------

	int note = 75;
	cout << note << " est un ";
	if (note >= 60)
	{
		cout << "succ\x8as";
	}
	else
	{
		cout << "\202chec";
	}
	cout << endl;


	// Exemple #3 - if avec une clause else
	// ------------------------------------

	char reponse = 'O';
	if (reponse == 'O')
	{
		cout << "la r\x82ponse est oui !";
	}
	else
	{
		cout << "la r\x82ponse est non !";
	}
	cout << endl;


	// Exemple #4 - if avec une clause else
	// ------------------------------------

	bool adulte = age >= 18;  // voir ci-haut pour la définition et l'initialisation de la variable age

	if (adulte)
	{
		cout << "enfin un adulte !";
	}

	_getch();
}