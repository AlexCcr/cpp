// Calcula el producto de tres enteros
#include <iostream> // permite al programa realizar operaciones de entrada y salida
using std::cout; // el programa usa cout
using std::cin; // el program usa cin
using std::endl; // el programa usa endl
// la funci�n main empieza la ejecuci�n del programa
int main()
{
   int x; // primer entero a multiplicar
   int y; // segundo entero a multiplicar
   int z; // tercer entero a multiplicar
   int resultado; // el producto de los tres enteros
   cout << "Escriba tres enteros: "; // pide los datos al usuario
   cin >> x >> y >> z; // lee tres enteros del usuario
   resultado = x * y * z; // multiplica los tres enteros; almacena el resultado
   cout << "El producto es " << resultado << endl; // imprime el resultado; fin de l�nea
   return 0; // indica que el programa se ejecut� correctamente
} // fin de la funci�n main 
