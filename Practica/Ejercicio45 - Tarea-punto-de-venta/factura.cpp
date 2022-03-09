#include <iostream>

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

    
    cout << "*******"<< endl;
    cout << "FACTURA"<< endl;
    cout << "*******"<< endl <<endl;

    cout <<"PRODUCTOS"<< endl;
    cout << listaProductos;

    cout << endl;
    cout << "SUBTOTAL: "<<subtotal;
    cout << endl;

    cout << endl;
    cout << "TOTAL: "<<total;
    cout << endl;
    cout << endl;
    cout << "IMPUESTO SOBRE VENTAS (15%): "<<total;
    cout << endl;
    system ("pause");
}