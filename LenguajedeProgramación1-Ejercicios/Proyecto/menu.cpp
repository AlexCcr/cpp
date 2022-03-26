#include <iostream>
#include "menu.h"

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

        cout << "1 -- Vendedor" << endl;
        cout << "2 -- Clientes" << endl;
        cout << "3 -- Productos" << endl;
        cout << "4 -- Proveedor" << endl;
        cout << "5 -- Bodega" << endl;
        cout << "7 -- Factura" << endl;
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
                cl = 1;
                system("cls");
                break;
            }
            if (valor ==2)
            {
                cl = 5;
                break;
            }
            else
            cl = 5;
            cout << "digito incorrecto, el programa se cerrara"<<endl;
            break;
        }
        if (opcion ==4)
        {
            //imprimirfactura();
            //impuesto();
        }
        // funcion de los menus productos(opcion);
    }
}