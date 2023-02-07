#include <iostream>
#include <iomanip>	
#include <chrono>
#include <conio.h>   
// vos autres includes ici

#include "../CVM_LIB/cvm 21.h"

// PRAGMA
#pragma warning (disable:6031)		// valeur de retour ignor�e '_getch'
#pragma warning (disable:26812)		// type enum 'type-name' est non d�limit�. Pr�f�rez 'enum class' � 'enum' (enum.3)

using namespace std;

// DIMENSION DU DAMIER

const size_t LIG = 8, COL = 12;											// lignes et colonnes du damier

// POSITION DU DAMIER � LA CONSOLE

const size_t START_X = 10;												// x du coin sup�rieur gauche du damier dans la console
const size_t START_Y = 5;												// y du coin sup�rieur gauche du damier dans la console

// CARACT�RISTIQUES DES CASES � LA CONSOLE

const size_t CASE_X = 6;												// largeur d'une case � l'affichage, 2 minimum
const size_t CASE_Y = 3;												// hauteur d'une case � l'affichage, 2 minimum

const size_t SPACE_X = 2;												// nombres de colonnes vides entre les cases, 1 minimum
const size_t SPACE_Y = 1;												// nombres de lignes vides entre les cases, 1 minimum

const size_t DELTA_X = CASE_X + SPACE_X;								// saut d'une case � l'autre, sur l'axe des X
const size_t DELTA_Y = CASE_Y + SPACE_Y;								// saut d'une case � l'autre, sur l'axe des Y

// DIMENSION DE LA FEN�TRE

const size_t WIN_X = 2 * START_X + (COL - 1) * DELTA_X + CASE_X;		// nombres de colonnes pour l'affichage d'une case
const size_t WIN_Y = 2 * START_Y + (LIG - 1) * DELTA_Y + CASE_Y;		// nombres de lignes   pour l'affichage d'une case

// COMMANDES

enum class Arrowkeys						// Code ascii d�cimal des touches fl�ch�es du clavier
{
	up_left		= 71,
	up			= 72,
	up_right	= 73,
	left		= 75,
	right		= 77,
	down_left	= 79,
	down		= 80,
	down_right	= 81,
};

using Ak = Arrowkeys;						// un alias plus concis

// CASES, DAMIER ET TRANSFORMATIONS

enum Case { CO, CS, CD, CF, CV };			// les diff�rentes cases possibles: ordinaire, surprise, dollars, fragile, vide

Case damier[LIG][COL] =						// le damier et ses cases initiales
{
	{ CO, CO, CO, CO, CO, CO, CO, CO, CV, CO, CO, CS },
	{ CO, CO, CV, CV, CO, CO, CO, CO, CO, CV, CO, CV },
	{ CO, CO, CV, CS, CV, CO, CO, CO, CO, CO, CV, CS },
	{ CO, CO, CV, CS, CV, CO, CO, CV, CV, CO, CV, CS },
	{ CS, CO, CV, CV, CV, CS, CV, CO, CV, CO, CV, CO },
	{ CS, CO, CS, CS, CO, CS, CV, CS, CV, CO, CV, CO },
	{ CS, CO, CS, CO, CO, CO, CV, CV, CV, CO, CV, CO },
	{ CS, CS, CO, CO, CO, CO, CO, CO, CO, CO, CO, CO }
};

Case futur[5] = { CF, CD, CF, CV, CV };		// la liste des transformations possibles  --  ex: futur[CO] ==> CF

// COOODONN�E LOGIQUE D'UN D�PLACEMENT 

struct LC									// ligne et colonne (l,c) d'une case du damier[l][c]
{
	size_t l, c;							// ligne: [0..LIG-1] -- colonne: [0..COL-1]
};

struct Move									// coordonn�es des 2 cases impliqu�es dans un d�placement
{
	LC from, to;
};

// AFFICHAGE DES CASES

struct XY									// coordonn�e graphique (x,y) d'une case dans la console
{
	size_t x, y;
};

struct Style								// le style pour l'affichage d'une case
{
	Color color; char c;					// le membre 'c' est le caract�re � utiliser pour l'affichage
};

Style map[5] =								// les style pour toutes les cases
{
	{ Color::blu, '\xB2' },					// ex: map[CO].c == '\xB2'				==> le caract�re � utiliser
	{ Color::blu, '\xB2' },
	{ Color::grn, '\x24' },					// ex: map[CD].color == Color::grn		==> la couleur � utiliser
	{ Color::pur, '\xB0' },
	{ Color::blk, '\x00' }
};

// AFFICHAGE DU CURSEUR

char cursor[3][3] =							// informations pour l'affichage du curseur
{
	{ '\xC9', '\xCB', '\xBB' },
	{ '\xCC', '\xCE', '\xB9' },
	{ '\xC8', '\xCA', '\xBC' }
};

//DEFINITIONS FONCTIONS
void aff_Case(Case box, XY xy);
void aff_Damier();
void aff_Curseur(Move m);
Move deplacement(Move m, int input);



int main()
{
	setwsize(WIN_Y, WIN_X);								// redimensionner la fen�tre de la console
	show(true);											// afficher (oui/non) le trait d'affichage de la console

	Move m;
	int input;
	m.from	= { 0,0 };						// coordonn�e logique {l,c} du curseur au d�part du jeu
	m.to	= { 0,0 };	
	/*
		NOTE 1)

			m.to = {?,?};								// d�terminer la case d'arriv�e du curseur avec la direction de la fl�che demand�e

			// ex: fl�che droite ==>

			m.to.l = m.from.l;							// la ligne n'a pas chang�e
			m.to.c = m.from.c + 1;						// d�placement d'une colonne vers la droite

		NOTE 2)

			if ( damier[m.to.l][m.to.c] == CD )		// pour v�rifier de quelle case il s'agit dans le tableau damier
				...
		NOTE 3)

			Utilisez le calcul �nonc� dans la sp�cification au point 10) pour retrouver la coordonn�e graphique (x,y) d'une case � partir de sa coordonn�e logique (l,c)

		NOTE 4)

			m.from = m.to;								// ne pas oublier que l'arriv�e deviendra le d�part du d�placement suivant

	*/


	// Continuez ici...

	aff_Damier();
	aff_Curseur(m);
	do
	{
		input = _getch();
		deplacement(m, input);
		aff_Curseur(m);
	} while (true);
	
}


void aff_Case(Case box, XY coord)
{
	{
		setcolor(map[box].color);					
		for (size_t y = 0; y < CASE_Y; ++y)
		{
			gotoxy(coord.x, coord.y++);
			for (size_t x = 0; x < CASE_X; ++x)
				cout << map[box].c;
		}
		setcolor(Color::wht);
	}
}

void aff_Damier()
{
	gotoxy(40, 2);
	cout << "DECOUVREZ ET AMASSEZ 15 CASES $$$$";

	XY coord;
	Case box;


	coord = { START_X, START_Y };
	int nbLigne;
	int nbColone;

	for (nbLigne = 0; nbLigne < LIG; nbLigne++)
	{
		coord.x = START_X;
		for (nbColone = 0; nbColone < COL; nbColone++)
		{
			coord.y = START_Y + nbLigne * (DELTA_Y);
			box = damier[nbLigne][nbColone];
			aff_Case(box, coord);
			coord.x += DELTA_X;
		}
	}
	setcolor(Color::wht);
}

void aff_Curseur(Move m)
{
	XY coord;
	int q = 0;
	int w = 0;
	setcolor(Color::yel);
	

	coord.x = START_X + m.to.c * DELTA_X;
	coord.y = START_Y + m.to.l * DELTA_Y;

	

	for (size_t y = 0; y < CASE_Y; ++y)
	{
		q = 0;
		gotoxy(coord.x, coord.y++);
		for (size_t x = 0; x < CASE_X; x++)
		{
			if (x > 0 && x < CASE_X - 1)
			{
				cout << cursor[w][1];
			}
			else
			{
				cout << cursor[w][q];
				q += 2;
			}

		}
		w++;
	}


	setcolor(Color::wht);	// remettre en blanc
}

Move deplacement(Move m, int input)
{
	switch ((Ak)input)
	{
	case (Ak::up):
		m.to.l = m.from.l;
		m.to.c = m.from.c--;
		break;
	case (Ak::down):
		m.to.l = m.from.l;
		m.to.c = m.from.c++;
		break;
	case (Ak::left):
		m.to.l = m.from.l--;
		m.to.c = m.from.c;
		break;
	case (Ak::right):
		m.to.l = m.from.l++;
		m.to.c = m.from.c;
		break;
	case (Ak::up_left):
		m.to.l = m.from.l--;
		m.to.c = m.from.c--;
		break;
	case (Ak::up_right):
		m.to.l = m.from.l++;
		m.to.c = m.from.c--;
		break;
	case (Ak::down_left):
		m.to.l = m.from.l--;
		m.to.c = m.from.c++;
		break;
	case (Ak::down_right):
		m.to.l = m.from.l++;
		m.to.c = m.from.c++;
		break;
	default:
		return(m);
	}
	if (m.to.l < 0 || m.to.l > COL - 1 || m.to.c < 0 || m.to.c > LIG)
	{
		m.to = m.from;
		return(m);
	}
	else
		return(m);
}