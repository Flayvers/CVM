#include <iostream>
#include <conio.h>   
#include <string>	
#include <iomanip>	
#include <chrono>
#include "..\CVM_LIB\cvm 21.h"
//#include "cvm 21.h"


// PRAGMA
#pragma warning (disable:6031)		// valeur de retour ignorée '_getch'
#pragma warning (disable:26812)		// type enum 'type-name' est non délimité. Préférez 'enum class' à 'enum' (enum.3)

using namespace std;

// DIMENSION DU DAMIER

const size_t LIG = 8, COL = 12;											// lignes et colonnes du damier

// POSITION DU DAMIER À LA CONSOLE

const size_t START_X = 10;												// x du coin supérieur gauche du damier dans la console
const size_t START_Y = 5;												// y du coin supérieur gauche du damier dans la console

// CARACTÉRISTIQUES DES CASES À LA CONSOLE

const size_t CASE_X = 6;												// largeur d'une case à l'affichage, 2 minimum
const size_t CASE_Y = 3;												// hauteur d'une case à l'affichage, 2 minimum

const size_t SPACE_X = 2;												// nombres de colonnes vides entre les cases, 1 minimum
const size_t SPACE_Y = 1;												// nombres de lignes vides entre les cases, 1 minimum

const size_t DELTA_X = CASE_X + SPACE_X;								// saut d'une case à l'autre, sur l'axe des X
const size_t DELTA_Y = CASE_Y + SPACE_Y;								// saut d'une case à l'autre, sur l'axe des Y

// DIMENSION DE LA FENÊTRE

const size_t WIN_X = 2 * START_X + (COL - 1) * DELTA_X + CASE_X;		// nombres de colonnes pour l'affichage d'une case
const size_t WIN_Y = 2 * START_Y + (LIG - 1) * DELTA_Y + CASE_Y;		// nombres de lignes   pour l'affichage d'une case

// COMMANDES

enum class Arrowkeys						// Code ascii décimal des touches fléchées du clavier
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

enum Case { CO, CS, CD, CF, CV };			// les différentes cases possibles: ordinaire, surprise, dollars, fragile, vide



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

// COOODONNÉE LOGIQUE D'UN DÉPLACEMENT 

struct LC									// ligne et colonne (l,c) d'une case du damier[l][c]
{
	size_t l, c;							// ligne: [0..LIG-1] -- colonne: [0..COL-1]
};

struct Move									// coordonnées des 2 cases impliquées dans un déplacement
{
	LC from, to;
};

// AFFICHAGE DES CASES

struct XY									// coordonnée graphique (x,y) d'une case dans la console
{
	size_t x, y;
};

struct Style								// le style pour l'affichage d'une case
{
	Color color; char c;
};

Style map[5] =								// les style pour toutes les cases
{
	{ Color::blu, '\xB2' },					// ex: map[CO].c == '\xB2'
	{ Color::blu, '\xB2' },
	{ Color::grn, '\x24' },					// ex: map[CD].color == Color::grn 
	{ Color::pur, '\xB0' },
	{ Color::blk, '\x00' }
};

// AFFICHAGE DU CURSEUR

char cursor[3][3] =							// informations pour l'affichage du curseur
{
	{ '\xC9', '\xCD', '\xBB' },
	{ '\xBA', '\x00', '\xBA' },
	{ '\xC8', '\xCD', '\xBC' }
};






int main()
{
	setwsize(WIN_Y, WIN_X);								// redimensionner la fenêtre de la console
	show(true);											// afficher (oui/non) le trait d'affichage de la console

	Move m;
	m.from = { 0,0 };										// coordonnée logique {l,c} du curseur au départ du jeu


	//test case couleur 


														/*
		NOTE 1)

			m.to = {?,?};								// déterminer la case d'arrivée du curseur avec la direction de la flèche demandée

			// ex: flèche droite ==>

			m.to.l = m.from.l;							// la ligne n'a pas changée
			m.to.c = m.from.c + 1;						// déplacement d'une colonne vers la droite

		NOTE 2)

			if ( damier[m.from.l][m.from.c] == CD )		// pour vérifier de quelle case il s'agit dans le tableau damier
				...
		NOTE 3)

			Utilisez le calcul énoncé dans la spécification au point 10) pour retrouver la coordonnée graphique (x,y) d'une case à partir de sa coordonnée logique (l,c)

		NOTE 4)

			m.from = m.to;								// l'arrivée deviendra le départ du déplacement suivant

	*/


	// Continuez ici...


	//TITRE
	gotoxy(40, 2);
	cout << "DECOUVREZ ET AMASSEZ 15 CASES $$$$";

	//CASE COULEUR
	XY xy;
	Case box[5] = { CO, CS, CD, CF, CV };


	xy = { START_X, START_Y };								// coordonnée supérieure gauche de la case
	int nbLigne;
	int nbColone;




	for (nbLigne = 0; nbLigne < LIG; nbLigne++)
	{
		xy.x = START_X;
		for (nbColone = 0; nbColone < COL; nbColone++)
		{
			xy.y = START_Y + nbLigne * (DELTA_Y);

			setcolor(map[damier[nbLigne][nbColone]].color);					// la fonction setcolor est spécifiée dans cvm 21.h
			for (size_t y = 0; y < CASE_Y; ++y)
			{
				gotoxy(xy.x, xy.y);

				for (size_t x = 0; x < CASE_X; ++x)
				{
					cout << map[damier[nbLigne][nbColone]].c;
					//xy.y++;
				}


				xy.y++;
			}


			xy.x += DELTA_X;

		}


	}
	setcolor(Color::wht);






	//CURSEUR

	{
		int q = 0;
		int w = 0;
		int i;// type de case
		xy = { 10,5 };								// coordonnée supérieure gauche de la case

		setcolor(Color::yel);						// la fonction setcolor est spécifiée dans cvm 21.h
		


		for (size_t y = 0; y < CASE_Y; ++y)
		{
			q = 0;
			gotoxy(xy.x, xy.y++);
			for (size_t x = 0; x < CASE_X; x++)
			{
				if (x > 0 && x < 5)
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

	//_getch();



	enum class Arrowkeys						// Code ascii décimal des touches fléchées du clavier
	{
		up_left = 71,
		up = 72,
		up_right = 73,
		left = 75,
		right = 77,
		down_left = 79,
		down = 80,
		down_right = 81,
	};

	using Ak = Arrowkeys;						// un alias plus concis


//CURSEUR QUI BOUGE
	int temp_x;
	int temp_y;
	int curseur;
	int l = 0;
	int c = 0;
	int temp_l =0;
	int temp_c=0;
	int dollard =0;
	int old_x = 0;
	int old_y = 0;
	int deplacement = 0;
	clock_t start;
	clock_t end;
	bool dep = true;

	const uint8_t ESCAPE = 27;
	xy.x = START_X; xy.y = START_Y;
	gotoxy(xy.x, xy.y);
	//curseur = _getch();

		//m.from = xy.x, xy.y;

	
	do {
		start = clock();
		temp_x = xy.x;
		temp_y = xy.y;
		curseur = _getch();					// lire le premier code ascii du tampon
		gotoxy(xy.x, xy.y); 
		if (curseur == 0 || curseur == 224)
		{
			if (_kbhit())
			{
				curseur = _getch();

				dep = true;

				switch ((Ak)curseur)
				{
				case (Ak::up):
					xy.y -= DELTA_Y;
					temp_l--;
					break;
				case (Ak::down):
					xy.y += DELTA_Y;
					temp_l++;
					break;
				case (Ak::left):
					xy.x -= DELTA_X;
					temp_c--;
					break;
				case (Ak::right):
					xy.x += DELTA_X;
					temp_c++;
					break;

				case (Ak::up_left):
					xy.y -= DELTA_Y;
					xy.x -= DELTA_X;
					temp_l--;
					temp_c--;
					break;
				case (Ak::up_right):
					xy.y -= DELTA_Y;
					xy.x += DELTA_X;
					temp_l--;
					temp_c++;
					break;
				case (Ak::down_left):
					xy.y += DELTA_Y;
					xy.x -= DELTA_X;
					temp_l++;
					temp_c--;
					break;
				case (Ak::down_right):
					xy.y += DELTA_Y;
					xy.x += DELTA_X;
					temp_l++;
					temp_c++;
					break;

				default:
					break;
				}
				if (xy.x < START_X || xy.x > 104|| xy.y < START_Y|| xy.y > 35)
				{
					xy.x = temp_x;
					xy.y = temp_y;
					dep = false;
				}
				
				if (temp_l < 0|| temp_c < 0|| temp_l >= LIG|| temp_l >= LIG)
				{
					temp_l = l;
					temp_c = c;
					dep = false;
				}
				
			
				//if(damier[l][c]==CO)
					//futur[CO];
				
				if (dep==true)
				{
					gotoxy(9, 37);
					setcolor(Color::yel);
					cout << "move: (" << c << "," << l << ") --> (" << temp_c << "," << temp_l << ")";
					switch (damier[l][c])
					{
					case (CO):
						if (damier[temp_l][temp_c] != CV)
						{
							deplacement++;
							if (deplacement > 1)
							{
								setcolor(map[futur[0]].color);
								for (size_t y = 0; y < CASE_Y; ++y)
								{
									gotoxy(temp_x, temp_y);

									for (size_t x = 0; x < CASE_X; ++x)
									{
										cout << map[futur[0]].c;
									}


									temp_y++;
								}
								damier[l][c] = futur[0];
							}
							else
							{
								setcolor(Color::blu);
								for (size_t y = 0; y < CASE_Y; ++y)
								{
									gotoxy(temp_x, temp_y);

									for (size_t x = 0; x < CASE_X; ++x)
									{
										cout << map[damier[0][0]].c;
									}


									temp_y++;
								}
							}
							
							l = temp_l;
							c = temp_c;
						}
						else
						{
							temp_l = l;
							temp_c = c;
							xy.x = temp_x;
							xy.y = temp_y;
						}
						break;
					case (CS):
						if (damier[temp_l][temp_c] != CV)
						{
							deplacement++;
							setcolor(map[futur[1]].color);
							for (size_t y = 0; y < CASE_Y; ++y)
							{
								gotoxy(temp_x, temp_y);

								for (size_t x = 0; x < CASE_X; ++x)
								{
									cout << map[futur[1]].c;
								}


								temp_y++;
							}
							damier[l][c] = futur[1];
							l = temp_l;
							c = temp_c;
						}
						else
						{
							temp_l = l;
							temp_c = c;
							xy.x = temp_x;
							xy.y = temp_y;
						}
						break;
					case (CD):
						if (damier[temp_l][temp_c] != CV)
						{
							deplacement++;
							setcolor(map[futur[2]].color);
							for (size_t y = 0; y < CASE_Y; ++y)
							{
								gotoxy(temp_x, temp_y);

								for (size_t x = 0; x < CASE_X; ++x)
								{
									cout << map[futur[2]].c;
								}

								temp_y++;
							}
							dollard++;
							damier[l][c] = futur[2];
							l = temp_l;
							c = temp_c;
						}
						else
						{
							temp_l = l;
							temp_c = c;
							xy.x = temp_x;
							xy.y = temp_y;
						}
						break;
					case (CF):
						if (damier[temp_l][temp_c] != CV)
						{
							deplacement++;
							setcolor(map[futur[3]].color);
							for (size_t y = 0; y < CASE_Y; ++y)
							{
								gotoxy(temp_x, temp_y);

								for (size_t x = 0; x < CASE_X; ++x)
								{
									cout << map[futur[3]].c;
								}


								temp_y++;
							}
							damier[l][c] = futur[3];
							l = temp_l;
							c = temp_c;
						}
						else
						{
							temp_l = l;
							temp_c = c;
							xy.x = temp_x;
							xy.y = temp_y;
						}
						break;
					case (CV):
						if (damier[temp_l][temp_c] != CV)
						{
							setcolor(map[futur[CV]].color);
							for (size_t y = 0; y < CASE_Y; ++y)
							{
								gotoxy(temp_x, temp_y);

								for (size_t x = 0; x < CASE_X; ++x)
								{
									cout << map[futur[CV]].c;
								}


								temp_y++;
							}
							damier[l][c] = futur[4];
							
						}
						else
						{
						temp_l = l;
						temp_c = c;
						xy.x = temp_x;
						xy.y = temp_y;
						deplacement--;
						}
						break;

					default:;

					}

				}

				



				gotoxy(xy.x, xy.y);
				int temp2y=xy.y;
				{
					int q = 0;
					int w = 0;	// type de case
					//xy = { 10,5 };								// coordonnée supérieure gauche de la case

					setcolor(Color::yel);						// la fonction setcolor est spécifiée dans cvm 21.h

					for (size_t y = 0; y < CASE_Y; ++y)
					{
						q = 0;
						gotoxy(xy.x, xy.y++);
						for (size_t x = 0; x < CASE_X; x++)
						{
							if (x > 0 && x < 5)
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
					xy.y = temp2y;


				}
			}
		}
		gotoxy(96, 37);
		setcolor(Color::grn);
		cout << "$$$$  :  " << dollard;
		
		if (dollard == 15)
		{
			break;
		}
		end = clock();
		/*if (damier[l--][c--] == CV && damier[l--][c] == CV && damier[l--][c++] == CV && damier[l][c--] == CV && damier[l][c++] == CV && damier[l++][c--] == CV && damier[l++][c] == CV && damier[l++][c++] == CV)
			break;
		else if (damier[l++][c--] == CV && damier[l++][c++] == CV && damier[l--][c++] == CV && temp_c == 0 && temp_l == 0)
			break;
		l = temp_l;
		c = temp_c;*/

		int casesVides = 0;
		for (int nl = -1; nl < 2; nl++)
		{
			for (int nc = -1; nc < 2; nc++)
			{
				if (damier[l + nl][c + nc] == CV)
				{
					//(nl!=1 && nc!=1)
					casesVides++;
				}
			}
		}
		
		
			if (casesVides == 8)							//si il est entoure de case vide
				break;
			
			
			if (l == 0 && c == 0 && casesVides == 3)		//si il est dans le coin en haut a gauche
				break;
			if (l == 7 && c == 0 && casesVides == 3)		//si il est dans le coin en bas a gauche
				break;
			if (l == 7 && c == 11 && casesVides == 3)		//si il est dans le coin en bas a droite
				break;
			if (l == 0 && c == 11 && casesVides == 3)		//si il est dans le coin en haut a droit
				break;
			
			
			if (c == 0 && casesVides >= 5)					//si il est sur le cote gauche entoure de case vide
				break;
			if (l == 7 && casesVides >= 5)					//si il est sur le cote bas entoure de case vide
				break;
			if (c == 11 && casesVides >= 5)					//si il est sur le cote droit entoure de case vide
				break;
			if (l == 0 && casesVides >= 5)					//si il est sur le cote haut entoure de case vide
				break;
			
		

	} 	
	while (curseur != ESCAPE);
	
	if (dollard == 15)
	{
		clrscr();
		setcolor(Color::_grn);

		gotoxy(0, 2);
		cout << "FELICITATION!";
	}

	else
	{
		clrscr();
		setcolor(Color::red);
		gotoxy(0, 2);
		cout << "ECHEC!";

	}
	
	gotoxy(1, 4);
	cout << "Total des points           : " << dollard << " sur un objectif de 15";
	gotoxy(1, 6);
	cout << "Total des deplacements    : " << deplacement;
	gotoxy(1, 8);
	cout << "Temps ecoule              : ";
	cout<< ((int)end - start / CLOCKS_PER_SEC)/1000;
	cout << " secondes";
	

	
	
		_getch();

}
	

		
