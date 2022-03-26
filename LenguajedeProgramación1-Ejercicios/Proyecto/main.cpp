#include <iostream>
#include <cstdlib>
#include <fstream>
#include "seguridad.h"

using namespace std;

int main()
{
	system("cls");
	login();
	
	return 0;
}
/*
string linea;
string texto;

int main() {
	
	
	ifstream archivo ("documento.txt");
		
	while (getline(archivo, linea))
	{
		texto = texto + linea + "\n";
	}
	
	archivo.close();
	cout << texto;
	
	ofstream archivo2 ("documento.txt");
	archivo2 << texto + " Nueva linea de texto ";
	
	system("pause");
	
	return 0;
}
*/