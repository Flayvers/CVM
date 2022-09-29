#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	unsigned int ouaragan_force = 3;

	cout << "Ouragan de force " << ouaragan_force << "\n\n"	<< "Impacts potentiels :" << "\n\n";

	switch (ouaragan_force)
	{
		case 5:	cout << " - Destruction des toitures, des portes et des fen\x88tres."							<< endl;
		case 4:	cout << " - Dommages importants \x85 la structure des batiments."								<< endl;
		case 3:	cout << " - Dommages importants \x85 la v\x82g\x82tation et des grands arbres d\x82racin\x82s."	<< endl;
		case 2:	cout << " - Petites embarcations arrach\202es de leurs amarres."								<< endl;
		case 1:	cout << " - Innondation coti\x8ares et dommages aux rives et aux quais."						<< endl;
	}

	_getch();
}