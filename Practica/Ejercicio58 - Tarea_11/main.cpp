#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

/*Objectivo
Sumar todos los elementos de un arreglo bidimensional
Requerimientos
1) Crear un arreglo bidimensional de 5x5 
2) Inicializar cada elemento del arreglo con valores random
3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma: "
*/

int main(int argc, char const *argv[])
{
    int matriz[5][5];
    int suma = 0;
    int i, j;
    srand(time(NULL)); 

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma += matriz[i][j];
        }
    }
    cout << "\n\nTotal Suma: " << suma << endl;
    cout << "\n  \n";
    return 0;
}
