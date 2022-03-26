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
    string id, nombre, cargo;
    string datosGuardados;
    string id2;
    string primerNombre, segundoNombre, primerApellido, segundoApellido;
    string nombreCompleto;
    string cargo2;
    int opcion;

                    //leer los datos guardados
    ifstream archivo3 ("trabajadores.txt");
	getline(archivo3, id);
	getline(archivo3, nombre);
    getline(archivo3, cargo);
	archivo3.close();
    //std::cin.ignore();
    
                    //Muestra los datos como tabla
    cout << "Lista de trabajadores:"<<endl;
    cout << "*********************"<<endl;
    cout << "  ID  \t\t  |   NOMBRE COMPLETO \t\t\t  |     Cargo"<<endl;
    cout << id + " | " + nombre + " | " + cargo <<endl;
    cout << "Fin de linea___________________________________"<<endl;

                    //almacenarlos temporalmente (backup)
    datosGuardados = id + "\n" + nombre + "\n" + cargo + "\n";
    
                    // modificar los datos guardados
    cout << "1 -- Agregar nuevo trabajador\n";
    cout << "0 -- Atras\n";    
    cin >> opcion;
    
    if (opcion == 1)
    {
        system("cls");
        cout << "*\n\n\t\t\tFORMULARIO PARA NUEVO EMPLEADO*\n*";
        cout << "\t\t\tIngrese el ID: \t\t\t";
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

        nombreCompleto = primerNombre + " " + segundoNombre + " " + primerApellido + " " + segundoApellido;
        ofstream archivo4 ("trabajadores.txt");
        archivo4 << datosGuardados + id2 + "\n" + nombreCompleto + "\n" + cargo2;
        archivo4.close();
        system("cls");
        
    }
    if(opcion == 0)
    {
        
        menu();
    }
        trabajadores();
    }

