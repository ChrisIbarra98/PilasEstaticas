#include<conio.h>
#include<stdlib.h>
#include "Pila.h"
using namespace std;

int main()
{
    Pila Pilaestatica;
    int opcion,aux3;
    string aux1,aux2;

    do {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                {
                    system("cls");
                    cout << "Push" << endl;
                    cout << "Ingrese los datos solicitados:" << endl;
                    cout << "\nClave de Empleado:";
                    cin>>aux3;
                    cout << "Nombre:";
                    cin.ignore();
                    getline(cin,aux1);
                    cout << "Domicilio:";
                    getline(cin,aux2);
                    empleado x(aux3,aux1,aux2);
                    Pilaestatica.push(x);
                    getch();
                    break;
                }
            case 2:
                {
                    system("cls");
                    cout << "Pop" << endl;
                    Pilaestatica.pop();
                    getch();
                    break;
                }
            case 3:
                {
                    system("cls");
                    cout << "Top" << endl;
                    Pilaestatica.top();
                    getch();
                    break;
                }
            case 4:
                {
                    cout << "\n\nSaliendo del programa..." << endl;
                    getch();
                    break;
                }
            default:
                {
                    cout << "\n\nOpcion no valida. Intentalo de nuevo." << endl;
                    getch();
                    break;
                }
        }

    } while (opcion != 4);

}

