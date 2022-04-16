#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include "menu.h"

using namespace std;

extern float precioHoraFloat;
extern float rapFloat;
extern float ihhssFloat;
extern float ivmFloat;
extern string nombrepublico;
extern string cargoPublico;

void planilla()
{
    abrirDocumento();
    abrirParametros();

    float diasTrabajados, horasExtras, horasExtrasDigitadas, tipoHorasExtras, sueldoBase, sueldoBruto;
    float deducciones=0, sueldo, precioHoraExtra, descuento, rap;
    int eleccion, horasTotales, horasTrabajadas;


    cout <<endl <<endl;
    cout << "Ingrese el sueldo base: (digite 0 en caso de no tener) ";
    cin >> sueldoBase;
    cout << "\nIngrese el numero de dias trabajados: ";
    cin >> diasTrabajados;
    cout << "\nIngrese las horas trabajadas en total (sin incluir horas extras): ";
    cin >> horasTrabajadas;

    horasTotales = diasTrabajados * 8;
    
    if(horasTotales != horasTrabajadas)
    {
        if(horasTotales > horasTrabajadas)
        {
            cout << "\nEl numero de horas trabajadas totales, es inferior al numero de horas laborales totales.\n";
            cout << "Es correcto? (1 = Si, 0 = No): ";
            cin >> eleccion;
            if(eleccion == 1)
            {
                deducciones = horasTotales - horasTrabajadas;
            }
            if(eleccion ==0)
            {
                planilla();
                menu();
            }
        }
        if(horasTrabajadas > horasTotales)
        {
            cout << "\n\nEl numero de horas trabajadas totales, es superior al numero de horas laborales totales.\n";
            cout << "Revise los datos ingresados.\n";
            system("pause");
            planilla();
            menu();
        }
    }
     
    cout << "\nIngrese las horas extra trabajadas: (puede ser 0) ";
    cin >> horasExtrasDigitadas;
    if(horasExtrasDigitadas > 0)
    {
        cout << "\nDigite el tipo de horas extra: \n";
        cout << "1 -- Horas extras diurnas\n";
        cout << "2 -- Horas extras nocturnas\n";
        cout << "3 -- Horas extras festivas\n";
        cout << "...  ";
        cin >> tipoHorasExtras;
    }
    else{}

    // if precio hora extra
    if(tipoHorasExtras == 1)
    {
        precioHoraExtra = (precioHoraFloat * 0.25) + precioHoraFloat;
    }
    else if(tipoHorasExtras == 2)
    {
        precioHoraExtra = (precioHoraFloat * 0.5) + precioHoraFloat;
    }
    else if(tipoHorasExtras == 3)
    {
        precioHoraExtra = (precioHoraFloat * 0.75) + precioHoraFloat;
    }
    else{}
    
    cout << "\n\t\t\t\t\tFin de la carga de datos.\n";
    cout << "\t\t\t\t\t***************************\n";
    system("pause");

    //Calculo del salario
    sueldoBruto = sueldoBase + (precioHoraFloat * horasTrabajadas) + (precioHoraExtra * horasExtrasDigitadas);
    rap = sueldoBruto * rapFloat;
    descuento = (rap + ihhssFloat + ivmFloat+(deducciones*precioHoraFloat));
    sueldo = sueldoBruto - descuento;
    //Imprimir
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    system("cls");
    system("cls");
    cout << "EMPRESA SA. DE CV.\n";
    cout << "RUC: 2055-099-9\n";
    cout << "NOMBRE DEL EMPLEDO: " << nombrepublico << "\t\tPUESTO: "<< cargoPublico << endl << endl << endl;
    cout << " *Cantidades monetarias, expresadas en Lempiras**********************************************\n";
    cout << "Concepto \t\t\t\t\tmonto\t\t\t\tdeducciones\n";
    SetConsoleTextAttribute(hConsole, 2);
    cout << "Salario Bruto \t\t\t\t\t" << sueldoBruto << " Lempiras." << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Salario Base \t\t\t\t\t" << sueldoBase << endl;
    cout << diasTrabajados << " dias \t\t\t\t\t" << ((precioHoraFloat * horasTrabajadas)) << endl;
    cout << horasExtrasDigitadas << " horas extra \t\t\t\t\t" << (precioHoraExtra * horasExtrasDigitadas) << endl;
    cout << "********************************************************************************************" << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "Descuentos \t\t\t\t" << "\t\t\t\t\t" <<descuento << " Lempiras." << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout <<"-"<< deducciones << " horas \t\t\t\t\t\t\t\t\t" << ((precioHoraFloat * deducciones)) << endl;
    cout << "RAP \t\t\t\t" << "\t\t\t\t\t\t" <<rap << endl;
    cout << "IHSS \t\t\t\t" << "\t\t\t\t\t\t" <<ihhssFloat << endl;
    cout << "IVM \t\t\t\t" << "\t\t\t\t\t\t" <<ivmFloat << endl;
    cout << "********************************************************************************************" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "Salario Neto \t\t\t\t\t" << sueldo << " Lempiras." << endl;
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");

}