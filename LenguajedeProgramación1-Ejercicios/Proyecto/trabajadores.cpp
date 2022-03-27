#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"
using namespace std;

void trabajadores()
{   
                    //Variables
    system("cls");
    string id, nombreCompleto, cargo, texto;
    string datosGuardados;
    string id2;
    string primerNombre, segundoNombre, primerApellido, segundoApellido;
    string nombreCompletomd;
    string cargo2;
    int opcion;

                    //leer los datos guardados//std::cin.ignore();
    ifstream archivo3 ("trabajadores.txt");
    cout << "\t\t\tLista de trabajadores:"<<endl;
    cout << "\t\t\t*********************"<<endl;
    cout << "ID | NOMBRE COMPLETO \t\t\t\t\t\t| Cargo"<<endl;
	while (getline(archivo3, id))
	{			
			while(getline(archivo3, nombreCompleto))
			{
				while(getline(archivo3, cargo))
				{
					cout << id + " | " + nombreCompleto + " \t\t\t\t| " + cargo<<endl;
					texto = texto + id + "\n" + nombreCompleto + "\n" + cargo + "\n";
					break;
				}
				break;
			}
      }
        cout << "Fin de linea___________________________________"<<endl <<endl;

                    //almacenarlos temporalmente (backup) en la variable texto.

                    // modificar los datos guardados
    cout << "1 -- Agregar nuevo trabajador\n";
    cout << "0 -- Atras\n";    
    cin >> opcion;
    
    if (opcion == 1)
    {
        system("cls");
        cout << "\n\n\t\t\tFORMULARIO PARA NUEVO EMPLEADO\n";
        cout << "\t\t\tIngrese el ID: \t\t\t\t";
        cin >> id2;
        cout << "\t\t\tIngrese el primer nombre: \t\t";
        cin >> primerNombre;
        cout << "\t\t\tIngrese el segundo nombre: \t\t";
        cin >> segundoNombre;
        cout << "\t\t\tIngrese el primer apellido: \t\t";
        cin >> primerApellido;
        cout << "\t\t\tIngrese el primer segundo: \t\t";
        cin >> segundoApellido;
        cout << "\t\t\tIngrese el cargo: \t\t\t";
        cin >> cargo2;
        cout << "******************************************";

        nombreCompletomd = primerNombre + " " + segundoNombre + " " + primerApellido + " " + segundoApellido;
        ofstream archivo4 ("trabajadores.txt");
        archivo4 << texto + id2 + "\n" + nombreCompletomd + "\n" + cargo2;
        archivo4.close();
        system("cls");
        cout << "\n\n\t\t\tEMPLEADO AGREGADO CORRECTAMENTE!!!\n";
        cout <<endl << " " <<endl;
        system("pause");
        system("cls");
    }
    if(opcion == 0)
    {
        menu();
    }
    trabajadores();
}

