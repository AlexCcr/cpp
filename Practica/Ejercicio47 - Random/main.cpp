#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int numero = 0;
    // inicializa el número random
    srand(time(NULL)); 

    for (int i = 0; i < 100; i++)
    {   
        // genera un numero entre 1 y 10
        numero = rand()%100+1;
        cout << "Numero al azar: " << numero << endl;    
    }

    return 0;
}