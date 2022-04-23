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
    string id, nombreCompleto, cargo, texto, texto2;
    string datosGuardados, id2, reg;
    string primerNombre, segundoNombre, primerApellido, segundoApellido;
    string nombreCompletomd;
    string cargo2;
    int opcion, id_e, contador = 0;

                     //leer los datos guardados
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
                    reg = id;
					break;
				}
				break;
			}
      }
    cout << "Fin de linea___________________________________"<<endl <<endl;
    cout << "1 -- Agregar nuevo trabajador\n";
    cout << "2 -- Eliminar trabajador\n";
    cout << "0 -- Atras\n";    
    cin >> opcion;
    
    if (opcion == 1)
    {
        system("cls");
        cout << "\n\n\t\t\tFORMULARIO PARA NUEVO EMPLEADO\n";
        cout << "Ultimo ID registrado: ";
        cout << reg << endl;
        cout << "\t\t\tIngrese el ID: \t\t\t\t";
        cin >> id2;
        int i = stof(reg);
        int j = stof(id2);
        while(id2 <= reg)
        {
            cout << "\t\t\tEl ID ya existe, ingrese otro ID: \t";
            cin >> id2;
        }
        cout << "\t\t\tIngrese el primer nombre: \t\t";
        cin >> primerNombre;
        cout << "\t\t\tIngrese el segundo nombre: \t\t";
        cin >> segundoNombre;
        cout << "\t\t\tIngrese el primer apellido: \t\t";
        cin >> primerApellido;
        cout << "\t\t\tIngrese el segundo apellido: \t\t";
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
    if (opcion == 2)
    {
        system("cls");
        cout << "\n\n\t\t\tFORMULARIO PARA BORRAR EMPLEADO\n";
        cout << "\t\t\tIngrese el ID del empleado a borrar: \t\t\t\t";
        cin >> id_e;
        cout << "******************************************";
        ifstream modificar ("trabajadores.txt");
        while (getline(modificar, id))
	{			
			while(getline(modificar, nombreCompleto))
			{
				while(getline(modificar, cargo))
				{
                    contador = contador + 1;
                    if (id_e != contador)
                    {
                        texto2 = texto2 + id + "\n" + nombreCompleto + "\n" + cargo + "\n";
					    break;
                    }
                    else
                    {
                        break;
                    }
					
				}
				break;
			}
     }
        ofstream eliminar ("trabajadores.txt");
        eliminar << texto2;
        eliminar.close();
        system("cls");
        cout << "\n\n\t\t\tEMPLEADO BORRADO CORRECTAMENTE!!!\n";
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

