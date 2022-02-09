#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if(nota>100 || nota<0){
        cout<< "Ingrese una nota entre 0 y 100";
        return 0;
    }

   /* 100	S(A++)
95	A+      91
90	A       86
85	A-      81
80	B+      76
75	B       71
70	B-      66
65	        61
60	C       56
55	C-      51
50	D+      46
45	D       41
40	D-      36
35	E+      31
30	E       29
25	E-      21
20	F+      16
if(nota >= 16 && nota <= 20){
    cout<< "Obtuvo una calificación de F+";
}
if(nota >= 11 && nota <= 15){
    cout<< "Obtuvo una calificación de F";
}
if(nota >= 6 && nota <= 10){
    cout<< "Obtuvo una calificación de F";
}
if(nota >=   0 && nota <= 5){
    cout<< "Obtuvo una calificación de F-";
}

if(nota == 0){
    cout<< "Obtuvo una calificación de F--";
}
*/
    return 0;
}
