#include <iostream>
#include <windows.h>
#include "factura.h"
using namespace std;

double total;
double subtotal;
double isv;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{   
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad*precio);
    isv = subtotal * 0.15;
    total = subtotal+isv;
}

void imprimirfactura()
{
    system ("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    cout << "\t\t*******"<< endl;
    cout << "\t\tFACTURA"<< endl;
    cout << "\t\t*******"<< endl <<endl;

    cout <<"PRODUCTOS"<< endl;
    cout << listaProductos;

    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
    cout << "SUBTOTAL: "<<subtotal;
    cout << " Lempiras";
    cout << endl;
    
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "   TOTAL: "<<total;
    cout << " Lempiras";
    cout << endl;
    cout << endl;
    
    
}
void impuesto()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 12);
    cout << "IMPUESTO SOBRE VENTAS (15%): ";
    SetConsoleTextAttribute(hConsole, 7);
    cout <<isv;
    cout << " Lempiras";
    cout << endl<<endl;
    system ("pause");
}