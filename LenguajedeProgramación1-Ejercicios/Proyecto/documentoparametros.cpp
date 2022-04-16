#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"
#include <windows.h>

using namespace std;

float precioHoraFloat=0;
float rapFloat=0;
float ihhssFloat=0;
float ivmFloat=0;

void abrirParametros()
{
    string precioHora;
    string rap;
    string ihhss;
    string ivm;
    string texto;
    string texto2;

    ifstream abrir("parametros.txt");
    	while (getline(abrir, precioHora))
	    {			
			while(getline(abrir, rap))
			{
				while(getline(abrir, ihhss))
				{

					while(getline(abrir, ivm))
                    {
                        break;
                    }
				break;
                }
            break;
			}
		break;
		}
    // convert string to float
    precioHoraFloat = stof(precioHora);
    rapFloat = stof(rap);
    ihhssFloat = stof(ihhss);
    ivmFloat = stof(ivm);
    abrir.close();
}