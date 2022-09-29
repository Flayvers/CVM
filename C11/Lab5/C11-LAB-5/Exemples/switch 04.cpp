#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char lettre;

	cout << "Quelle est la lettre ? ";
	lettre = _getche();
	cout << endl;

	lettre = tolower(lettre);
	if (lettre >= 'a' && lettre <= 'z')
		switch (lettre)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y': cout << "voyelle"; break;

			default: cout << "consonne";
		}
	else
		cout << "ne fait pas partie de l'alphabet";

	_getch();
}