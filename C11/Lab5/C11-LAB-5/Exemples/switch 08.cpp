#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a = 10, b = 200, c = 30;

	// STYLE À ÉVITER
	switch (a <= b && b <= c)
	{
		case true:
			cout << "est en ordre croissant";
			// autres instructions
			break;

		case false:
			cout << "n'est pas en ordre croissant";
			// autres instructions
			break;
	}


	cout << endl;


	// STYLE RECOMMANDÉ
	if (a <= b && b <= c)
	{
		cout << "est en ordre croissant";
		// autres instructions
	}
	else
	{
		cout << "n'est pas en ordre croissant";
		// autres instructions
	}


	_getch();
}