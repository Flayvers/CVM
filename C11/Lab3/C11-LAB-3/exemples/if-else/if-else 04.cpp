#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	// Exemple #1 - imbrication des if-else
	// ------------------------------------
	int nombre = -44;
	string verdict;

	// Version A
	if (nombre >= 0)
	{
		if (nombre == 0)
		{
			verdict = "neutre";
		}
		else
		{
			verdict = "positif";
		}
	}
	else
	{
		verdict = "n\x82gatif";
	}
	cout << nombre << " est un nombre " << verdict << endl;


	// Version B (idem que A)
	if (nombre > 0)
	{
		verdict = "positif";
	}
	else
	{
		if (nombre == 0)
		{
			verdict = "neutre";
		}
		else
		{
			verdict = "n\x82gatif";
		}
	}
	cout << nombre << " est un nombre " << verdict << endl;


	// Exemple #2 - imbrication des if-else
	// ------------------------------------

	int temperature = 27;
	string meteo;

	if (temperature >= 35)
	{
		meteo = "caniculaire";
	}
	else
	{
		if (temperature >= 25)
		{
			meteo = "estivale";
		}
		else
		{
			if (temperature >= 10)
			{
				meteo = "automnale";
			}
			else
			{
				meteo = "hivernale";
			}
		}
	}

	cout << temperature << " celcius annonce un climat " << meteo << endl;

	_getch();
}