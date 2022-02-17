#include <iostream>

using namespace std;

int main()
{
    int pares = 0;
    int impares = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }
        
        cout << i << "  ";
    }
   for (int x = 1; x <= 10; x++)
    {
        if (x % 2 != 0)
        {
            impares = impares + x;
        }
        
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
    cout << endl;
    cout << "Total impares: " << impares;
    cout << endl;
    cout << "Total es: " << pares + impares;

    return 0;
}
