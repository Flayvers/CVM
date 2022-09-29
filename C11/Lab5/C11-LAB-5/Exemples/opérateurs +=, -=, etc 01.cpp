#include <iostream>
#include <conio.h>

using namespace std;

// OPÉRATEURS D'AFFECTATIONS:  =  ,  +=  ,  -=  ,  *=  ,  /=  ,  %=

int main ()
{
	int a, b, c;

	// 1) Affectation:   =

	c = b = a = 0;		// de droite à gauche

	a = 10;
	b = 20;
	c = 30;

	c = a + b * c;		// c = expression;


	// 2) Affectation additionnée:   +=		note:  c += expression;  ==>  c = c + (expression);
	// 3) Affectation soustraite :   -=		note:  c -= expression;  ==>  c = c - (expression);
	// 4) Affectation multipliée :   *=		note:  c *= expression;  ==>  c = c * (expression);
	// 5) Affectation divisée    :   /=		note:  c /= expression;  ==>  c = c / (expression);
	// 5) Affectation modulée    :   %=		note:  c %= expression;  ==>  c = c % (expression);

	// EXEMPLES

	c += 1;				//  ==>  c = c + (1);

	c += a * b;			//  ==>  c = c + (a * b)

	c -= 2 + a * 4;		//  ==>  c = c - (2 + a * 4)

	c *= 2 * c;			//  ==>  c = c * (2 * c)

	c /= a;				//  ==>  c = c / (a)

	c %= 10;			//  ==>  c = c % (10)


	_getch();
}