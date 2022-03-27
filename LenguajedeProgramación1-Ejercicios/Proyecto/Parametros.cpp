#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"

using namespace std;

void parametros()
{   
    string precioHora;
    string precioHoraExtra;
    string precioHoraExtraNocturna;
    string precioHoraExtraFestiva;
    int diasTrabajados;
    int horasTrabajadas;
    int horasExtra;
    int horasExtraNocturna;
    int horasExtraFestiva;
    int deducciones;
    int sueldo;
    int opcion;
    int turno;
    int sueldoTotal;
    int sueldoBruto;
    int sueldoNeto;
    int sueldoBase;
    system("cls");
    ifstream archivo6("Parametros.txt");
    cout << "\t\t\tParametros actuales:"<<endl;
    cout << "\t\t\t*********************"<<endl;

    while (getline(archivo6, precioHora))
		{
			
			
			while(getline(archivo6, precioHoraExtra))
			{
				
				while(getline(archivo6, precioHoraExtraFestiva))
				{
					while(getline(archivo6, precioHoraExtraNocturna))
                    {
                        cout << precioHora + " | " + precioHoraExtra + " | " + precioHoraExtraFestiva + " | " + precioHoraExtraNocturna<<endl;
                        break;
                    }
					
					break;
				}
				break;
		
			}
    
        }
        cout << "Fin de linea___________________________________"<<endl <<endl;
    cout << "1 -- Modificar parametros\n";
    cout << "0 -- Atras\n";
    cin >> opcion;
    if(opcion == 1)
    {
        system("cls");
        cout << "\n\n\t\t\tFORMULARIO PARA MODIFICAR PARAMETROS\n";
        cout << "\t\t\tIngrese el precio por hora: \t\t\t\t";
        cin >> precioHora;
        cout << "\t\t\tIngrese el precio por hora extra: \t\t\t";
        cin >> precioHoraExtra;
        cout << "\t\t\tIngrese el precio por hora extra festiva: \t\t";
        cin >> precioHoraExtraFestiva;
        cout << "\t\t\tIngrese el precio por hora extra nocturna: \t\t";
        cin >> precioHoraExtraNocturna;

        ofstream archivo7("Parametros.txt");
        archivo7 << precioHora << endl;
        archivo7 << precioHoraExtra << endl;
        archivo7 << precioHoraExtraFestiva << endl;
        archivo7 << precioHoraExtraNocturna << endl;
        archivo7.close();
        /*cout << "\t\t\tIngrese el numero de dias trabajados: \t\t";
        cin >> diasTrabajados;
        cout << "\t\t\tIngrese el numero de horas trabajadas: \t\t";
        cin >> horasTrabajadas;
        cout << "\t\t\tIngrese el numero de horas extra: \t\t";
        cin >> horasExtra;
        cout << "\t\t\tIngrese el numero de horas extra nocturna: \t\t";
        cin >> horasExtraNocturna;
        cout << "\t\t\tIngrese el numero de horas extra festiva: \t\t";
        cin >> horasExtraFestiva;
        cout << "\t\t\tIngrese el numero de deducciones: \t\t";
        cin >> deducciones;
        cout << "\t\t\tIngrese el numero de sueldo: \t\t";
        cin >> sueldo;
        cout << "\t\t\tIngrese el numero de turno: \t\t";
        cin >> turno;*/
    }
}    
