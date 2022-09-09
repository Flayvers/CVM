#pragma once
#include <string>

// Nettoyage de la fenêtre

void clreol();								// efface la ligne courante à partir du curseur sans le déplacer
void clreoscr();							// efface la fenêtre à partir du curseur sans le déplacer
void clrscr();								// efface toute la fenêtre et remet le curseur en (0,0)


// Gestion du curseur

size_t wherex();							// retourne la col x courante du curseur
size_t wherey();							// retourne la lig y courante du curseur

void gotoxy(size_t x, size_t y);			// place le curseur à la colonne x et à la ligne y  ( l'origine = gotoxy(0,0); )
void show(bool flag);						// affiche ou cache le curseur


// Coloration des caractères

enum class Color
{ 
	blk, blu, grn, aqua, red, pur, yel, wht, gry, _blu, _grn, _aqua, _red, _pup, _yel, _wht
};

void setcolor(Color tx);					// ex: setColor(Color::yel); --> les prochains cout seront désormais en jaunes 
void setcolor(Color bg, Color tx);			// 


// Jeu de caractères

void setcp(unsigned cp);					// ex: cp = code page = 1252 pour les accents


// Dimension de la fenêtre et de la la mémoire tampon

void setwsize(unsigned rows, unsigned cols);

std::string windowshot(bool endl);
std::string buffershot(bool endl);

// Pour éteindre le warning C4326: le type de retour de 'main' doit être 'int' au lieu de 'void'
#pragma warning (disable:4326)			