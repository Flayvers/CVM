/*
	Auteur		: le prof
	Description	: Utilisation du type char et de la table ASCII
	Input		: Des lettres
	Output		: Des lettres
	Version		: 1.0
*/

#include <iostream>  // pour le cout
#include <conio.h>   // pour le _getch()

using namespace std;

int main()
{
	// CONSTANTES
	const char HASHTAG = '#';

	// VARIABLES
	char voy_a;
	char voy_e;
	char voy_i;
	char voy_o;
	char voy_u;
	char voy_y;


	// INPUT - AVEC DES ALTERNATIVES SYNTAXIQUES ( Attention au simple guillements, � la num�rotation octale et hexad�cimale )

	// A) Syntaxe simple
	
	voy_a = 'a';		// le caract�re 'a'


	// B) Syntaxe avec les simples guillements et un num�ro octal ou hexad�cimal --> utile pour les caract�res accentu�s
	
	voy_e = '\145';		// le caract�re 'e' , num�ro octal \145			, de la table ASCII
	
	voy_i = '\x69';		// le caract�re 'i' , num�ro hexad�cimal \x69	, de la table ASCII


	// C) Syntaxe avec un num�ro d�cimal, octal ou hexad�cimal seulement

	voy_o = 111;		// le caract�re 'o' , num�ro d�cimal 111		, de la table ASCII

	voy_u = 0165;		// le caract�re 'u' , num�ro octal 0111			, de la table ASCII

	voy_y = 0x79;		// le caract�re 'y' , num�ro hexad�cimal 0x79	, de la table ASCII


	// OUTPUT

	// A) Avec les variables voy_ de type char

	cout << "Exemple " << HASHTAG << '1' << " les voyelles : ";
	cout << voy_a << ", " << voy_e << ", " << voy_i << ", " << voy_o << ", " << voy_u << ", " << voy_y << endl;

	// B) Attention ici-bas:

	// affichera 'a', 'e', 'i'
	// mais n'affichera pas 'o', 'u', 'y' mais plut�t le nombre entier (int) en d�cimal !!!

	cout << "Exemple " << HASHTAG << '2' << " les voyelles : ";
	cout << 'a' << ", " << '\145' << ", " << '\x69' << ", " << 111 << ", " << 0165 << ", " << 0x79 << endl;


	_getch();
}