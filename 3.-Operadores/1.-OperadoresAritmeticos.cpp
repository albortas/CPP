#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Operadores Aritmeticos en C++
    int a, b, c, e, f;
    float d;
    //Suma 
    a = 3 + 4;
    cout << "Suma: " << a << endl;
    //Resta
    b = 6 - 2;
    cout << "Resta: " << b << endl;
    //Multiplicacion
    c = a * 2;
    cout << "Multiplicacion: " << c << endl;
    //Division
    d = b / 2.5;
    cout << "Division: " << d << endl;
    //Modulo
    f = a % 2;
    cout << "Modulo: " << f << endl;
    //exponente
    e = pow(a,2);
    cout << "Exponente: " << e << endl;

    return 0;
}