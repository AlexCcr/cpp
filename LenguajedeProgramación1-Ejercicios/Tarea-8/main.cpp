//Cree una funci�n que calcule la raiz cuadrada de un n�mero dado utilizando alguna funci�n de la libreria math.h
#include <iostream>
#include <math.h>

using namespace std;

double raizcuad (int raiz)
{
	double raizCuadrada;
	raizCuadrada = sqrt(raiz);
	return raizCuadrada;
} 

int main ()
{
	cout << "CALCULAR LA RAIZ CUADRADA DE UN NUMERO\n";
	cout << "**************************************\n\n\n";
	
	double numero = 0;
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	cout << "\nLa raiz cuadrada de "<< numero << " es = " << raizcuad(numero) <<endl;
	return 0;
}
