#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>	
#include "seguridad.h"
#include <windows.h>
#include "menu.h"

using namespace std;

string usuariodefault = "admin";
string clavedefault = "admin";

string usuario;
string clave;

void cambiarLogin ()
{
    system("cls");
    //Leer la clave y contraseña
    ifstream archivo ("documento.txt");
	getline(archivo, usuario);
	getline(archivo, clave);
	archivo.close();

    //condicion que verifique la clave y usuario por defecto,
    cout << "Ingrese el usuario preestablecido: ";
    cin >> usuario;
    cout << "Ingrese la clave preestablecida: ";
    cin >> clave;

    if(usuario == usuariodefault && clave == clavedefault )
    {
        //cambiar la clave y contraseña
    
        cout << "Ingrese el nuevo usuario, (puede usar el usuario actual): ";
        cin >> usuario;
        cout << "Ingrese la nueva clave: ";
        cin >> clave;

        ofstream archivo2 ("documento.txt");
        archivo2 << usuario + "\n" + clave;
        archivo2.close();
        system("cls");
        login();
    }
    else
    {
        cout << "Datos incorrectos";
    }
}