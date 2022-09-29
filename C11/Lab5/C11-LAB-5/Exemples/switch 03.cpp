#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	unsigned int position, points; // course F1

	cout << "Quelle est la position finale du pilote ? ";
	cin >> position;

	switch (position)
	{
		case 1:  points = 25; break;
		case 2:  points = 20; break;
		case 3:  points = 15; break;
		case 4:  points = 10; break;
		case 5:  points = 8;  break;
		case 6:  points = 6;  break;
		case 7:  points = 5;  break;
		case 8:  points = 3;  break;
		case 9:	 points = 2;  break;
		case 10: points = 1;  break;

		default: points = 0;
	}

	cout << "En terminant \x85 la position " << position << " le coureur obtient " << points << " point" << (points > 1 ? "s" : "");

	_getch();
}