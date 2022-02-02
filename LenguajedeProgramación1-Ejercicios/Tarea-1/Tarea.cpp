#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;

    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    suma = a+b;
    resta = a-b;
    multiplicacion = a*b;
    division = a/b;
    cout << "La suma de a + b: " << suma <<endl;
    cout << "La resta de a - b: " << resta <<endl;
    cout << "La multiplicacion de a * b: " << multiplicacion <<endl;
    cout << "La division de a / b: " << division <<endl;
    
    return 0;
}
