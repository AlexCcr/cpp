#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // datos de entrada
    double subtotal = 0;
    double total = 0;
    double imp = 0.15;
    int desc = 0;
    double calculodescuento = 0;
    double calculoimpuesto = 0;

    cout<< "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> desc;
     
    // proceso
    calculodescuento = (subtotal * desc)/100;
    calculoimpuesto = (subtotal - calculodescuento)* imp;
    total = subtotal - calculodescuento + calculoimpuesto;


    // salida
    cout << endl;
    cout << "Total a pagar es: " << total;
    return 0;
}
