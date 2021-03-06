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
    float rapFloat;
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
                float porcentaje = stof(rap);
                rapFloat = porcentaje*100;
                rap = to_string(rapFloat);
				while(getline(archivo16, ihhss))
				{

					while(getline(archivo16, ivm))
                    {
                        cout << "\t\t\tParametros actuales:\n";
                        cout << "\t\t\t********************\n";
                        cout << "Precio por hora: \t\t" << precioHora << " Lempiras"<< endl;
                        cout << "RAP: \t\t\t\t" << rapFloat << "% (Porcentaje)"<< endl;
                        cout << "IHSS: \t\t\t\t"<< ihhss << ".00 Lempiras"<< endl;
                        cout << "IVM: \t\t\t\t" << ivm << ".00 Lempiras"<< endl;
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
        cout << "\t\t\tIngrese el precio por hora: \t\t\t";
        cin >> precioHora;
        cout << "\t\t\tIngrese el RAP (porcentaje, sin incluir %): \t";
        cin >> rapFloat;
        cout << "\t\t\tIngrese el IHSS/IVM: \t\t\t\t";
        cin >> ihhss;
        cout << "\t\t\tIngrese el IVM: \t\t\t\t";
        cin >> ivm;
        cout << "\n\n\t\t\tParametros actualizados:\n";
        cout << "\t\t\t************************\n";
        rap = to_string(rapFloat/100);
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