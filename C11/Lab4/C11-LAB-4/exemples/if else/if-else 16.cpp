#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	bool
		condition_1 = false,
		condition_2 = true,
		condition_3 = false;

	// Endroits où l'on peut écrire les instructions avec les cascades if-else


	// A) Imbrication simple de if else
	// --------------------------------

	// instructions avant ici
	if (condition_1)
	{
		cout << "condition_1 est true : Debut" << "\n";

		if (condition_2)
		{
			cout << "condition_2 est true" << "\n";
		}
		else
		{
			cout << "condition_2 est false" << "\n";
		}

		cout << "condition_1 est true : fin" << "\n";
	}
	else
	{
		cout << "condition_1 est false : Debut" << "\n";

		if (condition_3)
		{
			cout << "condition_3 est true" << "\n";
		}
		else
		{
			cout << "condition_3 est false" << "\n";
		}

		cout << "condition_1 est false : fin" << "\n";
	}
	// instructions après ici



	// B) Imbrication à l'infini de if-else 
	// ------------------------------------

	// instructions ici

	if (condition_1)
	{
		// instructions ici

		if (condition_2)
		{
			// instructions ici

			if (condition_3)
			{
				// instructions ici
			}
			else
			{
				// instructions ici
			}
			
			// instructions ici
		}
		else
		{
			// instructions ici
		}
		
		// instructions ici
	}
	else
	{
		// instructions ici

		if (condition_2)
		{
			// instructions ici
		}
		else
		{
			// instructions ici

			if (condition_3)
			{
				// instructions ici
			}
			else
			{
				// instructions ici
			}

			// instructions ici
		}

		// instructions ici
	}

	// instructions ici

	_getch();
}