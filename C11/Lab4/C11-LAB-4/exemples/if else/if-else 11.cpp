#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple #1 -- if sans la clause else
	// ------------------------------------

	int age = 20;

	if (age >= 0 && age <= 3)	// idem que: if (0 <= age && age <= 3)   ne pas faire: if ( 0 <= age <= 3 ) ==> ne marche pas
	{
		cout << "tout-petit" << endl;
	}


	// Exemple #2 -- Cascade de if
	// ---------------------------

	// A) Faite l'exécution en débug et remarquer le travail inutile fait par l'ordinateur

	if (0 <= age && age <= 3)
	{
		cout << "tout-petit";
	}
	if (4 <= age && age <= 10)
	{
		cout << "enfant";
	}
	if (11 <= age && age <= 16)
	{
		cout << "ado";
	}
	if (17 <= age && age <= 65)
	{
		cout << "adulte";
	}
	if (66 <= age && age <= 120)
	{
		cout << "vieux";
	}
	cout << endl;


	// B) Réécriture avec imbrication des if

	if (0 <= age && age <= 3)
	{
		cout << "tout-petit";
	}
	else
	{
		if (4 <= age && age <= 10)
		{
			cout << "enfant";
		}
		else
		{
			if (11 <= age && age <= 16)
			{
				cout << "ado";
			}
			else
			{
				if (17 <= age && age <= 65)
				{
					cout << "adulte";
				}
				else
				{
					if (66 <= age && age <= 120)
					{
						cout << "vieux";
					}
				}
			}
		}
	}
	cout << endl;


	// C) Réécriture avec simplification lorsqu'il y a qu'une seule instruction dans un bloc

	if (0 <= age && age <= 3)
		cout << "tout-petit";
	else
		if (4 <= age && age <= 10)
			cout << "enfant";
		else
			if (11 <= age && age <= 16)
				cout << "ado";
			else
				if (17 <= age && age <= 65)
					cout << "adulte";
				else
					if (66 <= age && age <= 120)
						cout << "vieux";
	cout << endl;


	// D) Réécriture à plat d'une cascade de if-else: autre façon de présenter le code

	if (0 <= age && age <= 3)
		cout << "tout-petit";
	else if (4 <= age && age <= 10)
		cout << "enfant";
	else if (11 <= age && age <= 16)
		cout << "ado";
	else if (17 <= age && age <= 65)
		cout << "adulte";
	else if (66 <= age && age <= 120)
		cout << "vieux";
	cout << endl;


	// E) Simplification possible: autre façon de présenter le code

	if (0 <= age)
		if(age <= 3)
			cout << "tout-petit";
		else if (age <= 10)
			cout << "enfant";
		else if (age <= 16)
			cout << "ado";
		else if (age <= 65)
			cout << "adulte";
		else if (age <= 120)
			cout << "vieux";
	cout << endl;

	_getch();
}