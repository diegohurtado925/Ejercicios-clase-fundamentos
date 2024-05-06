#include <iostream>
using namespace std;
int main ()
{
    char c;

    cout << endl << "INGRESE UNA DE LAS SIGUIENTES LETRAS EN MAYUSCULAS" << endl << "R Y B W K C G" << endl << endl;
    cin >> c;

    switch (c)
    {
        case 'R':
        cout << "Rojo" << endl;
        break;

        case 'Y':
        cout << "Amarillo" << endl;
        break;

        case 'B':
        cout << "Azul" << endl;
        break;

        case 'W':
        cout <<"Blanco" << endl;
        break;

        case 'K':
        cout <<"Negro" << endl;
        break;

        case 'C':
        cout << "Cian" << endl;
        break;
        
        case 'G':
        cout <<"Verde" << endl;
        break;

        default:
        cout <<"Letra incorrecta" << endl;
        break;
    }

return 0;

}