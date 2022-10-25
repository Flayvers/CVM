#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>		// pour les fonctions mathématiques

using namespace std;

/*
	FONCTIONS MATHÉMATIQUES DE TRANSFORMATION

	round()		==> l'entier arrondi le plus proche
	floor()		==> l'entier du plancher
	ceil()		==> l'entier du plafond
	trunc()		==> l'entier
	abs()		==> la valeur absolue
*/

int main()
{
	const int S = 10;
	const double V1 = 2.3;
	const double V2 = 3.8;
	const double V3 = 5.5;
	const double V4 = -V1;
	const double V5 = -V2;
	const double V6 = -V3;

	cout << fixed << setprecision(2) << right << endl;

	cout << setw(S) << "value" << setw(S) << "round" << setw(S) << "floor" << setw(S) << "ceil" << setw(S) << "trunc" << setw(S) << "abs" << "\n\n";

	cout << setw(S) << V1 << setw(S) << round(V1) << setw(S) << floor(V1) << setw(S) << ceil(V1) << setw(S) << trunc(V1) << setw(S) << abs(V1) << "\n";
	cout << setw(S) << V2 << setw(S) << round(V2) << setw(S) << floor(V2) << setw(S) << ceil(V2) << setw(S) << trunc(V2) << setw(S) << abs(V2) << "\n";
	cout << setw(S) << V3 << setw(S) << round(V3) << setw(S) << floor(V3) << setw(S) << ceil(V3) << setw(S) << trunc(V3) << setw(S) << abs(V3) << "\n";
	cout << setw(S) << V4 << setw(S) << round(V4) << setw(S) << floor(V4) << setw(S) << ceil(V4) << setw(S) << trunc(V4) << setw(S) << abs(V4) << "\n";
	cout << setw(S) << V5 << setw(S) << round(V5) << setw(S) << floor(V5) << setw(S) << ceil(V5) << setw(S) << trunc(V5) << setw(S) << abs(V5) << "\n";
	cout << setw(S) << V6 << setw(S) << round(V6) << setw(S) << floor(V6) << setw(S) << ceil(V6) << setw(S) << trunc(V6) << setw(S) << abs(V6) << "\n";

	_getch();
}