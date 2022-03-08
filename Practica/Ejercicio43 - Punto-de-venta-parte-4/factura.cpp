#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{   
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad*precio);
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
    
}