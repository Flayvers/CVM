/*
	Auteur		: le prof
	Description	: Utilisation des caractères accentués et spéciaux de la table ASCII
	Input		: Du texte
	Output		: Du texte
	Version		: 1.0
*/

#include <iostream>	// pour le cout
#include <conio.h>	// pour le _getch()
#include <string>	// pour le type <string>

using namespace std;

int main()
{
	// CONSTANTES
	const string titre = "Exemples de texte avec des caract\x8ares accentu\x82s ou sp\202ciaux";


	// OUTPUT

	cout << titre << endl << endl;

	cout << "1) " << "\x90ric parle le fran\207ais" << endl;

	cout << "2) " << "No\x89l sera bient\x93t \x85 nos portes !" << endl;

	cout << "3) " << "Citation: \xae Rien ne sert de courir; il faut partir \x85 point \xaf" << endl;

	cout << "4) " << "C:\\User\\Alain\\Documents\\" << "\n\n";

	cout << "\t" << "Oranges"	<< "\t\t" << "Citrons"	<< "\t\t" << "Poires"	<< "\n"; // une tabulation à chaque 8 caractères
	cout << "\t" << "34"		<< "\t\t" << "21"		<< "\t\t" << "56"		<< "\n";
	cout << "\n";


	// OUTPUT - ATTENTION

	// cout << "Erron\x82e";  --> Erreur de compilation car \x annonce un nombre hexadécimal et VS détectera 82e et non 82 !

	// 2 solutions possibles

	cout << "1) Erron\202e" << "\n";		// utiliser le code en octal
	cout << "2) Erron\x82" << "e" << "\n";	// segmenter le mot

	_getch();

}