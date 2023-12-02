#include<iostream>
using namespace std;

int main(){
    //Operadores Incremento
    int a = 0, b, c;
    //Operador post-incremento
    a++; //Se incrementa la proxima vez que su utiliza la variable
    cout << "Nuevo valor de a: " << a << endl;
    //Operador pre-incremento
    ++a;
    cout << "Nuevo valor de a: " << a << endl;
    //Operador Decremento 
    //Operador post-decremento
    a--;
    cout << "Nuevo valor de a: " << a << endl;
    //Operador pre-decremento
    --a;
    cout << "Nuevo valor de a: " << a << endl;

    return 0;
}