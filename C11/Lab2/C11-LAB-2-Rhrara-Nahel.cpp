#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace::std;

int main()
{
	const char			CARAC = 'A';
	const int			ENTIER = 75000;
	const short			ENTIERCOURT = -42;
	const long			ENTIERLONG = 57000;
	const float			REEL = 123.456;
	const double		REELDOUBLE = 12.0123456789;
	const unsigned int	SANSSIGNE = 54321;
	const string		TITRE = "420-C11-VM -- Laboratoire 2";
	string				nom;
	string				prenom;
	string				numeroGroupe;

	cout << setw(((120 - TITRE.size())/2) + TITRE.size()) << right << TITRE;
	cout << endl << endl;
	cout << "Taper votre pr\x82nom : ";
	cin >> prenom;
	cout << "Taper votre nom : ";
	cin >> nom;
	cout << "Taper votre num\x82ro de groupe : ";
	cin >> numeroGroupe;
	cout << endl;

	cout << "Essai du cadrage \x85 gauche et de la notation en virgule flottante :" << endl;

	cout << left << fixed << setprecision(2);

	cout
		<< setw(8)	<< ENTIER
		<< setw(8)	<< ENTIERCOURT
		<< setw(8)	<< ENTIERLONG
		<< setw(8)	<< SANSSIGNE 
		<< setw(8)	<< CARAC 
		<< endl
		<< setw(8)	<< REEL
		<< setw(8)	<< REELDOUBLE;

	cout << endl << endl;

	cout << "Essai du cadrage \x85 droite et de la notation scientifique:" << endl;

	cout << right << scientific << setprecision(5);

	cout
		<< setw(12) << ENTIER
		<< setw(12) << ENTIERCOURT
		<< setw(12) << ENTIERLONG
		<< setw(12) << SANSSIGNE
		<< setw(12) << CARAC 
		<< endl
		<< setw(15) << REEL
		<< setw(15) << REELDOUBLE;

	cout << endl << endl;

	cout << "Essai de mise en page:" << endl;

	cout << right << fixed << setprecision(3);

	cout << left << setw(8) << "" << setw(16) << "entier"		<< "= " << hex					<< ENTIER		<< endl;
	cout << left << setw(8) << "" << setw(16) << "entierCourt"	<< "= " << hex					<< ENTIERCOURT	<< endl;
	cout << left << setw(8) << "" << setw(16) << "entierLong"	<< "= " << hex					<< ENTIERLONG	<< endl;
	cout << left << setw(8) << "" << setw(16) << "sansSigne"	<< "= " << hex					<< SANSSIGNE	<< endl;
	cout << left << setw(8) << "" << setw(16) << "carac"		<< "= "							<< CARAC		<< endl;
	cout << left << setw(8) << "" << setw(16) << "reel"			<< "= " << right << setw(10)	<< REEL			<< endl;
	cout << left << setw(8) << "" << setw(16) << "reelDouble"	<< "= " << right << setw(10)	<< REELDOUBLE	<< endl;
	
	cout << endl << "Salut " << prenom << " " << nom << " du groupe " << numeroGroupe << " !";

	_getch();
}