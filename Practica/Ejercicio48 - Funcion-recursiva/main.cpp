#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
	if(miNumero == numeroSecreto)
	{
		system ("cls");
		cout <<"ADIVINASTE!"<<endl;
	}
	else
	{
		cout <<"Intento Fallido con: " << miNumero << endl;
		int otroNumero = 0;
		cout <<"Ingrese otro Numero: ";
		cin >> otroNumero;
		adivinarNumeroSecreto(otroNumero);
	}
}

int main ()
{
	int numero = 0;
	cout<< "Adivinar el numero secreto"<<endl;
	cout<< "**************************"<<endl<<endl;
	cout<< "Ingrese el numero secreto: ";
	cin >> numero;
	adivinarNumeroSecreto(numero);
	
	return 0;
}
