// Cree un programa que muestre el resultado de jugar con dos dados

#include <iostream>
#include <time.h>
#include<stdlib.h>
#include <windows.h>


using namespace std;

int tiraDados( void );

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t\tPrograma para jugar con dos dados:"<<endl;
	cout << "\t\t*********************************"<<endl<<endl<<endl;
	
	int resultado;
	srand(time(NULL)); 
	resultado = tiraDados();
	cout << "\n\nEl jugador obtuvo ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << resultado << " puntos";
	SetConsoleTextAttribute(hConsole, 7);
return 0; 
}

int tiraDados( void )
{
int dado1;    
int dado2;    
int resultado; 

dado1 = 1 + ( rand() % 6 ); 
dado2 = 1 + ( rand() % 6 ); 
resultado = dado1 + dado2; 

cout << "El jugador tiro: " << dado1 << " y " << dado2;
return resultado;

} 

