#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"
#include <windows.h>

using namespace std;

void parametros()
{   
    string precioHora;
    string rap;
    string ihhss;
    string ivm;
    string texto;
    string texto2;
    int opcion;
  
    system("cls");
    ifstream archivo16("parametros.txt");
    	while (getline(archivo16, precioHora))
	    {			
			while(getline(archivo16, rap))
			{
				while(getline(archivo16, ihhss))
				{

					while(getline(archivo16, ivm))
                    {
                        cout << "Precio por hora: " + precioHora + ".00 Lempiras" + " | " + "RAP: " + rap + " x 100% (Porciento)" + "  | " + "IHSS/IVM: " + ihhss + ".00 Lempiras" + " | " + "Maternidad: " + ivm + ".00 Lempiras" <<endl;
					    texto = texto + precioHora + "\n" + rap + "\n" + ihhss + "\n" + ivm + "\n";
                        break;
                    }
				break;
                }
            break;
			}
		break;
		}
    archivo16.close();

    cout << "\n\n\n Desea modificar los parametros?\n\n";
    cout << "1 -- Si\n";
    cout << "2 -- No\n";
    cin >> opcion;
    if(opcion == 1)
    {
        MessageBox(NULL, "Se eliminaran todos los datos","Advertencia", MB_OK);
        system("cls");
        cout << "\n\n\t\t\tNUEVOS PARAMETROS\n";
        cout << "\t\t\tIngrese el precio por hora: \t\t";
        cin >> precioHora;
        cout << "\t\t\tIngrese el RAP: \t\t\t";
        cin >> rap;
        cout << "\t\t\tIngrese el IHSS/IVM: \t\t\t";
        cin >> ihhss;
        cout << "\t\t\tIngrese el maternidad: \t\t\t";
        cin >> ivm;
        cout << "\n\n\t\t\tParametros actualizados:\n";
        cout << "\t\t\t************************\n";
        ofstream mod ("parametros.txt");
        mod << precioHora << "\n" << rap << "\n" << ihhss << "\n" << ivm << "\n";
        mod.close();
    }
    else
    {
        menu();
        exit(0);
    }
    
}