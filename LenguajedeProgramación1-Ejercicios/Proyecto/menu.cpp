#include <iostream>
#include "menu.h"
using namespace std;

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