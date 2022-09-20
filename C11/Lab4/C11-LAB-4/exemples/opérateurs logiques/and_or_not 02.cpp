#include <iostream>	// pour le cout
#include <iomanip>	// pour les manipulateurs tels setw(), setprecision(), etc
#include <conio.h>	// pour le _getch()

using namespace std;

int main()
{
	// 1) Exemple de OU logique (||)
	// -----------------------------
	
	string animal = "chien";

	if (animal == "chat" || animal == "chien")
	{
		cout << "1a) " << "Votre " << animal << " est un animal de compagnie" << "\n";
	}


	string votre_aliment = "La framboise";

	if (votre_aliment == "La cerise" || votre_aliment == "La fraise" || votre_aliment == "La framboise" || votre_aliment == "Le bleuet" )
	{
		cout << "1b) " << votre_aliment << " est un petit fruit qui pousse au Qu\202bec" << "\n";
	}


	int temperature = 20;
	string meteo = "orage";
	string santé = "en pleine forme";

	if (temperature < -30 || santé == "malade" || meteo == "orage")
	{
		cout << "1c) " << "Je regarde un film avec des biscuits." << "\n\n";
	}
	

	// 2) Exemple de ET logique (&&)
	// -----------------------------

	double prix_condo = 325000;

	if (prix_condo >= 300000 && prix_condo <= 400000)		// nb: if (15000 <= prix_condo <= 30000) ==> ne marche pas en C++
	{
		cout << "2a) " << "Le prix de votre condo est dans la moyenne" << "\n";
	}


	char note = 'A';

	if (note >= 'A' && note < 'E')	// code ASCII
	{
		cout << "2b) " << "R\x82ussite" << "\n";
	}


	string modele = "Honda";
	int année = 2018;
	double prix_voiture = 20500;
	double reduction = 0;

	if (modele == "Honda" && prix_voiture <= 25000 && prix_voiture >= 20000 && année < 2020)
	{
		reduction = 0.15; // 15%
	}
	cout << "2c) " << "On vous offre cette voiture " << modele << " pour : " << prix_voiture - (prix_voiture * reduction) << " $" << "\n\n";


	// Exemple #3 de NON logique (!)
	// -----------------------------

	bool éveillé = false;

	if ( ! éveillé )			// nb: idem que if(éveillé == false)
	{
		cout << "3a) " << "Lui reservir du caf\x82 svp !!!" << "\n";
	}


	int celcius = 105; 

	if ( ! (celcius < 100) )	// nb: idem que if(celcius >= 100)
	{
		cout << "3b) " << "Point d'\202bullition de l'eau atteint" << "\n";
	}


	int prix = 105;
	if (  ! (prix >= 10 && prix <= 100) )	// nb: idem que if(prix < 10 || prix > 100)
	{
		cout << "3c) " << "Il s'agit d'une fraude" << "\n\n";
	}

	_getch();
}