#include <iostream>

using namespace std;

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int numero = 0;
	
	cout << "Ingrese el numero de fibonacci que quiere conocer: ";
	cin >> numero;
	
	cout <<fib(numero);
	cout <<endl;
	return 0;	
}

