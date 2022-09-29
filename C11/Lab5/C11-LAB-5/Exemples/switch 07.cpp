#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x = 10, y = 99, z = 20;

	switch (x)
	{

		case 10:

			// instructions

			switch (y)
			{

				case 99:

					// instructions

					if (z > x)
					{
						// instructions
					}
					else
					{
						// instructions
					}

					// instructions

					break; // sort du switch(y)


				// autres case ...
			}

			// instructions

			break; // sort du switch(x)


		// autres case ...

	}

	_getch();
}