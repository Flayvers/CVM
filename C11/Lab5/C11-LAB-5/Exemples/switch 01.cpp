#include <iostream>
#include <conio.h>

using namespace std;


/*

switch (expression_enti�re)
{
    case constante_enti�re :
        instruction(s)
        break;                    // instruction optionnelle

    case constante_enti�re :
        instruction(s)
        break;                    // instruction optionnelle

    ...
    ...
    ...

    default :                     // cas optionnel
        instruction(s)
        break;                    // instruction optionnelle
}

notes:
- L'instruction switch est un saut vers le "case" qui v�rifie ( expression_enti�re == constante_enti�re ) ou vers "default" s'il existe
- Il est interdit d'avoir des "constante_enti�re" identiques
- L'instruction break permet de quitter le switch, sinon l'ex�cution se poursuit vers le "case" inf�rieur
- Le nombre de "case" n'est pas limit�

*/


int main ()
{
    int x = 2;
    switch (x)
    {
        case 1:
            cout << "choix 1";
            break;

        case 2:
            cout << "choix 2";
            break;

        case 3:
        case 4:
            cout << "choix 3 ou choix 4";
            break;

        case 5:
            cout << "choix 5";
            break;

        default:
            cout << "choix autre que 1, 2, 3, 4, 5";
    }

	_getch();
}