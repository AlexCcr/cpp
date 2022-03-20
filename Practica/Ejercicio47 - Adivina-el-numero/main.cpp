#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int numeroSecreto = 0;
    int miNumero = 0;

    //inicializa el numero random
    srand(time(NULL));

    // generar un numero entre 1 y 10
    numeroSecreto = rand() % 10 + 1;

    do 
    {
        
        
        cout <<"Adivina el numero secreto entre el 1 al 10"<<endl;
        cin >> miNumero;

        if(numeroSecreto < miNumero)
        {
            cout << "El numero secreto puede ser menor"<<endl;
        }
        else
        {
            if(numeroSecreto > miNumero)
            {
                cout << "El numero secreto puede ser mayor" <<endl;
            }

        }
    }
    while (numeroSecreto != miNumero);

    system("cls");
    cout << endl<< "ADIVINASTE! el numero secreto es "<< numeroSecreto;
    
    return 0;
}