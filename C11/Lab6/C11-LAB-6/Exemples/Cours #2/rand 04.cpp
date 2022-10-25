#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

// JEU : DEVINE LE NOMBRE SECRET ENTRE [1 .. MAX]

int main()
{
	// CONSTANTES
	const unsigned MAX = 1000;
	const unsigned CIBLE = unsigned(log2(MAX)+1); // limite théorique du nombre maximun d'essais nécessaires

	// VARIABLES
	bool trouvé;
	unsigned nombreSecret, choix, essais;

	// INITIALISATION
	srand(int(time(0))); // Initialiser le générateur rand()

	// TITRE
	cout << endl << "Trouvez le nombre secret entre [1 et " << MAX << "] en seulement " << CIBLE << " essais ou moins" << "\n\n\n";

	// JEU
	nombreSecret = rand() % MAX + 1; // Choisir un nombre secret entre [1 .. MAX]

	trouvé = false;
	for (essais = 0 ; ! trouvé ; ++essais)
	{
		// Lire un nombre
		cout << "Votre choix : ";
		cin >> choix;

		// Évaluation
		if ( nombreSecret > choix )
			cout << "\n\t" << "Trop petit !!!" << "\n\n" ;
		else if (nombreSecret < choix )
			cout << "\n\t" << "Trop grand !!!" << "\n\n";
		else
			trouvé = true;
	}
	
	// RÉSULTATS
	cout << "\n\t" << "Trouv\x82 en " << essais << " essai" << (essais > 1 ? "s" : "") << " --> " << (essais <= CIBLE ? "Bravo !!!" : "Bof !");
	
	_getch();
}