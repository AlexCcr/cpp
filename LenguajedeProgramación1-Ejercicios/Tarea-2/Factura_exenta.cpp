#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // variables
    double subtotal = 0;
    double total = 0;
    double imp = 0.15;
    int desc = 0;
    double calculodescuento = 0;
    double calculoimpuesto = 0;
    char exenta;

    //captura de datos
    cout<< "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> desc;
     
    cout << "Es factura exenta? escriba S o N: ";
    cin >> exenta;

    //condicion
    if(exenta == 'n'|| exenta=='N'){
       calculoimpuesto = (subtotal - calculodescuento)* imp;
    }
    else{
        if(exenta == 's'|| exenta=='S'){
        calculoimpuesto=0;
        }
        else{
            cout << "Tecla incorrecta.";
            cout <<endl;
            return 0;
        }
    }

    // proceso 
    calculodescuento = (subtotal * desc)/100;
    total = subtotal - calculodescuento + calculoimpuesto;

    // salida
    cout << endl;
    cout << "Total a pagar es: " << total;
    return 0;
}
