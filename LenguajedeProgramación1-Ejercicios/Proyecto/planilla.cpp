#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include "menu.h"

using namespace std;

void planilla()
{
    abrirDocumento();
    int diasTrabajados, horasTrabajadas, horasExtras, horasExtrasDigitadas, tipoHorasExtras, sueldoBase;
    int deducciones, horasTotales, sueldo, precioHoraExtra, opcion;
    
    cout <<endl <<endl;
    cout << "Ingrese el sueldo base: (digite 0 en caso de no tener) ";
    cin >> sueldoBase;
    cout << "Ingrese el numero de dias trabajados: ";
    cin >> diasTrabajados;
    cout << "Ingrese las horas trabajadas en total (sin incluir horas extras): ";
    cin >> horasTrabajadas;

    horasTotales = diasTrabajados * 8;

    if(horasTotales != horasTrabajadas && horasTotales << horasTrabajadas )
    {
        cout << "El numero de horas trabajadas totales, es inferior al numero de horas laborales totales.\n";
        cout << "Es correcto? (1 = Si, 0 = No): ";
        if(opcion == 1)
        {  
            if(horasTotales != horasTrabajadas && horasTrabajadas < horasTotales)
            {
                deducciones = horasTotales - horasTrabajadas;
            }     
        }
        if(opcion ==0)
        {
            planilla();
            menu();
        }
    }
    else {}
    if(horasTotales != horasTrabajadas && horasTrabajadas > horasTotales)
    {
        cout << "El numero de horas trabajadas totales, es supeior al numero de horas laborales totales.\n";
        cout << "Revise los datos ingresados.\n";
        system("pause");
        planilla();
        menu();
    }
    else {}

    cout << "Ingrese las horas extra trabajadas: (puede ser 0) ";
    cin >> horasExtrasDigitadas;
    if(horasExtrasDigitadas > 0)
    {
        cout << "Digite el tipo de horas extra: \n";
        cout << "1 -- Horas extras diurnas\n";
        cout << "2 -- Horas extras nocturnas\n";
        cout << "3 -- Horas extras festivas\n";
        cin >> tipoHorasExtras;
    }
    else{}

    // if precio hora extra
    if(tipoHorasExtras == 1)
    {
        precioHoraExtra = (200 * 0.25) + 200;
    }
    else if(tipoHorasExtras == 2)
    {
        precioHoraExtra = (200 * 0.5) + 200;
    }
    else if(tipoHorasExtras == 3)
    {
        precioHoraExtra = (200 * 0.75) + 200;
    }

    //Calculo del salario
    horasTrabajadas = horasTrabajadas - horasExtras;
    sueldo = sueldoBase + (horasTrabajadas * 200) + (horasExtras * precioHoraExtra);
    cout << "El sueldo: " << sueldo << endl;

}