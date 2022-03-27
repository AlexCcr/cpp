#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"

using namespace std;

void planilla()
{
    system("cls");
    string id, nombreCompleto, cargo, texto;
    int opcion, contador = 0, contador2 = 0;
    int diasTrabajados;
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
                        cout << "Planilla de pago de ID: \n";
                        cout << "**********************"<<endl;
                        cout << id + " - "+ nombreCompleto + ":\n";
                        cout << "Puesto de trabajo: " + cargo + "\n";
                    }
					break;
				}
				break;
			}
     }
    archivo10.close();
    cout <<endl <<endl;
    cout << "Ingrese los dias trabajados: ";
    cin >> diasTrabajados;
    cout << "Ingrese las horas trabajadas: ";
    int horasTrabajadas;
    cin >> horasTrabajadas;
    
}