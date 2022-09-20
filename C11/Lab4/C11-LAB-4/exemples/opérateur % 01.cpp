#include <iostream>
#include <conio.h>

using namespace std;

// L'OP�RATEUR DE DIVISION ENTI�RE ('/') ET L'OP�RATEUR COMPL�MENTAIRE DU MODULO ('%')

int main ()
{
	int nombre = 6, resultat, reste;

	// A) LA DIVISION ENTI�RE ('/')

	//    Attention:  ==>  nombre / 0;  ==>  division par z�ro  ==>  interdit  ==> erreur grave � l'ex�cution

	resultat = nombre / 1;	// resultat = 6
	resultat = nombre / 2;	// resultat = 3
	resultat = nombre / 3;	// resultat = 2
	resultat = nombre / 4;	// resultat = 1
	resultat = nombre / 5;	// resultat = 1
	resultat = nombre / 6;	// resultat = 1
	resultat = nombre / 7;	// resultat = 0
	resultat = nombre / 8;	// resultat = 0


	// B) LE MODULO ('%')  ==> LE RESTE DE LA DIVISION ENTI�RE

	//    Attention:  ==>  nombre % 0;  ==>  division par z�ro  ==>  interdit  ==> erreur grave � l'ex�cution

	reste = nombre % 1;	// reste = 0
	reste = nombre % 2;	// reste = 0
	reste = nombre % 3;	// reste = 0
	reste = nombre % 4;	// reste = 2
	reste = nombre % 5;	// reste = 1
	reste = nombre % 6;	// reste = 0
	reste = nombre % 7;	// reste = 6
	reste = nombre % 8;	// reste = 6


	// C) EXPLICATIONS MATH�MATIQUES:  (n % m),  si (n >= 0) ET (m != 0)

	// Exemple 1

	// 10 % 4  == ??

		// 4 * ? <= 10			? max

		// 4 * 2 <= 10

	// 10 % 4 == 10 - (4 * 2) == 2	==> reste


	// Exemple 2

	// 1 % 5  == ??

		// 5 * ? <= 1			? max

		// 5 * 0 <= 1

	// 1 % 5 == 1 - (5 * 0) == 1	==> reste


	// Exemple 3: g�n�ral

	// n % m  == ??

		// m * ? <= n			? max

		// m * a <= n

	// n % m == n - (m * a)



	// D) EXPLICATIONS MATH�MATIQUES:  (n % m),  si (n < 0) ET (m != 0)				(n < 0) ==> rarement utilis�

	// n % m  == - (-n % m)

	// -10 % 4 == - (10 % 4)

	// - (10 % 4) == ??

		// 4 * ? <= 10

		// 4 * 2 <= 10

	// - (10 % 4) == - (10 - (4 * 2)) == -2	==> reste


	_getch();
}