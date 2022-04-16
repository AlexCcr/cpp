#include <iostream>
#include "menu.h"


using namespace std;



void fechas()
{
    int dia = 0;
    int mes = 0;
    int anio = 0;
    char letra = 47;
    char a;
    char b;
 
    cout << "Fecha de ingreso (DD/MM/AAA): "<< endl;
    cin >> dia >> a >> mes >> b >> anio;
    
    if ( dia>0 && dia< 32 && a == letra && mes >0 && mes < 13 && b == letra && anio>2000 && anio<2101 ){
        cout << "La fecha es correcta!" << endl;
        system("pause");
        system("cls");
        cout << "\t\t\tPlanilla de pago de ID: \n";
        cout << "\t\t\t**********************"<<endl;
        cout << "Fecha de ingreso: " << dia << letra << mes << letra <<anio <<endl;
    }
    else
    {
        cout << "Incorrecto el formato: DD/MM/AAAA\n";
        system("pause");
        system("cls");
        fechas();
    }
}