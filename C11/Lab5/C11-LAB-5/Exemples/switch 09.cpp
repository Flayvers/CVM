#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	const int C1 = 10, C2 = 20, C3 = 30;

	int e = 2, a = 22, b = 33, t;


	// ATTENTION � LA DUPLICATION DE CODE INUTILE 
	
	// STYLE � �VITER -- �criture avec du code inutilement dupliqu�

	switch (e)
	{
		case 1: t = (a + b) * C1 + 15; break;
		case 2: t = (a + b) * C2 + 15; break;
		case 3: t = (a + b) * C3 + 15; break;
	}

	// STYLE RECOMMAND� -- 1) R��criture en �liminant la duplication de code

	t = (a + b);
	switch (e)
	{
		case 1: t *= C1; break;
		case 2: t *= C2; break;
		case 3: t *= C3; break;
	}
	t += 15;

	// STYLE RECOMMAND� -- 2) R��criture en �liminant la duplication de code

	int C;
	switch (e)
	{
		case 1: C = C1; break;
		case 2: C = C2; break;
		case 3: C = C3; break;
	}
	t = (a + b) * C + 15;


	_getch();
}