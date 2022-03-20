#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres [3][2];
    nombres[0][0] = "Juan";
    nombres[0][1] = "Perez";

    nombres[1][0] = "Maria";
    nombres[1][1] = "Martinez";
    
    nombres[2][0] = "Perez";
    nombres[2][1] = "Perez";

    for (int i = 0; i<3; i++)
    {
       for(int j = 0; j < 2; j++)
       {
           cout << nombres[i][j] << " ";
       }

        cout << endl;       
       // cout << nombres[i][0] << " "<< nombres [i][1] <<endl;
    }

    return 0;
}
