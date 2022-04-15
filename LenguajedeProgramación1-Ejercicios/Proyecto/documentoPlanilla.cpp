#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"

using namespace std;

void abrirDocumento()
{
    system("cls");
    int opcion, contador = 0, contador2 = 0;
    string id, nombreCompleto, cargo, texto;
    ifstream archivo9 ("trabajadores.txt");
    cout << "\t\t\tLista de trabajadores:"<<endl;
    cout << "\t\t\t*********************"<<endl;
    cout << "ID | NOMBRE COMPLETO \t\t\t\t\t\t| Cargo"<<endl;
	while (getline(archivo9, id))
	{			
			while(getline(archivo9, nombreCompleto))
			{
				while(getline(archivo9, cargo))
				{

					cout << id + " | " + nombreCompleto + " \t\t\t\t| " + cargo<<endl;
					texto = texto + id + "\n" + nombreCompleto + "\n" + cargo + "\n";
					break;
				}
				break;
			}
      }
        cout << "Fin de linea___________________________________"<<endl <<endl;
    archivo9.close();

    cout << "Seleccionar empleado (digite el ID):\n";
    cout << "0 -- Atras\n";
    cin >> opcion;
    if (opcion == 0)
    {
        menu();
        exit(0);
    }
    else
    {
    system("cls");
    ifstream archivo10 ("trabajadores.txt");
    while (getline(archivo10, id))
	{			
			while(getline(archivo10, nombreCompleto))
			{
				while(getline(archivo10, cargo))
				{
                    contador = contador + 1;
                    if (opcion == contador)
                    {
                        system("cls");
                        cout << "\t\t\tPlanilla de pago de ID: \n";
                        cout << "\t\t\t**********************"<<endl;
                        fechas();
                        cout << id + " - "+ nombreCompleto + ":\n";
                        cout << "Puesto de trabajo: " + cargo + "\n";
                    }
					break;
				}
				break;
			}
     }
    archivo10.close();
    }
}