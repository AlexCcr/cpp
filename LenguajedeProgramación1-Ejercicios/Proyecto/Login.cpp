#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>	
#include "seguridad.h"
#include <windows.h>
#include "menu.h"

using namespace std;

extern int cl;

void login ()
{
	string usuario;
	string clave;
	
	//Leer la clave y contraseña
    
	ifstream archivo ("documento.txt");
	getline(archivo, usuario);
	getline(archivo, clave);
	archivo.close();

	string user;
	string pass;
	int c = cl;
	int opcion = 0;
	while (c<3)
	{
		cout << "\n\n\n\t\t\tINGRESO AL SISTEMA"<<endl <<endl;
		cout << "\t\t\tUsuario: \t\t";
		cin >> user;
		cout << "\t\t\tClave: \t\t\t";
		cin >> pass;

		c++;

		
			if(usuario == user && clave == pass)
			{
				system("cls");
				cout << "\t\t\tBienvenido al sistema\n";
				cout << "\t\t\t*********************\n";
				system ("pause");
				menu();
				c = cl;
			}
			else
			{
				
				cout <<"\n\n\n**********************************************"<<endl;
				cout <<"Usuario o clave incorrecta "<< "intento: " << c << "/3" << endl;
				cout <<"**********************************************"<<endl;
				cout << "Pulse 1 para cambiar las credenciales. (pulse otra digito para volver a intentarlo) ";
				cin >> opcion;

				if (c == 3 && opcion != 1)
				{
					cout << "\n\n\n\t\t\t*********************************************"<<endl;
					cout << "\t\t\t*DEMASIADOS INTENTOS, intente mas tarde*"<<endl;
					cout << "\t\t\t*********************************************"<<endl;
				}

				if(opcion == 1)
				{
					cambiarLogin ();
					c = 5;
				}
			}	
	}
	exit(0);
}

