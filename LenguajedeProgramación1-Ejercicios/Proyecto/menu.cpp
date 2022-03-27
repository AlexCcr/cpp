#include <iostream>
#include "menu.h"
#include "seguridad.h"
using namespace std;

int cl = 0;

void menu ()
{

    int opcion = 0;

    while (true)
    {
        system ("cls");
        cout << "\t\t\t********\n";
        cout << "\t\t\t  MENU  \n";
        cout << "\t\t\t********\n\n\n";

        cout << "1 -- Planillas"<<endl;
        cout << "2 -- Cambiar parametros"<<endl;
        cout << "3 -- Trabajadores" << endl;
        cout << "0 -- Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 0)
        {   
            int valor;
            cout << "Pulse: 1 para cerrar sesion o 2 para salir del sistema: ";
            cin >> valor;
            if(valor == 1 )
            {
                cl = 0;
                system("cls");
                login();
                break;
            }
            if (valor ==2)
            {
                cl = 5;
                system("cls");
                login();
                break;
            }
            else
            cout << "digito incorrecto."<<endl;
            system("pause");
            menu();
            break;
        }
        if (opcion ==3)
        {
            trabajadores();
        }
        if (opcion == 1)
        {
            planilla();
        }
        if (opcion == 2)
        {
            parametros();
        }
        else
        {
            
        }
    }
}