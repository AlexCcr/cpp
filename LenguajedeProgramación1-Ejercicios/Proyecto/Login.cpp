#include <iostream>
#include <string.h>
#include "seguridad.h"
#include <windows.h>
using namespace std;

void login ()
{

# define usuario "Alexander"
# define clave "12345678"


	char user[25];
	char pass[25];
	int c = 1;
	
	while (c<3)
	{
		cout << "\n\n\n\t\t\tINGRESO AL SISTEMA"<<endl <<endl;
		cout << "\t\t\tUsuario: \t\t";
		cin.getline(user, 25);
		cout << "\t\t\tClave: \t\t";
		cin.getline(pass, 25);

		c++;



		if(strlen(pass)>=8)
		{
			//strcomp(pass, usuario)
			if(strcmp(pass, clave) == 0 && strcmp(user, usuario)==0)
			{
				system("cls");
				cout << "\t\t\tBienvenido al sistema\n";
				cout << "\t\t\t*********************\n";
				c = 5;
			}
			else
			{
				cout <<"no"<<endl;
			}
			
		}
		else
		{
			cout << "\n\n\n\t\t***************************ERROR*****************************\n";
			cout << "\t\t\tLa clave debe tener un minimo de 8 caracteres\n";
			cout << "\t\t*************************************************************\n";
		}
	}
	
}

