#include<iostream>
using namespace std;

int main(){
    //Operador AND
    bool a = true;
    bool b = false;
    cout << "Valor de a: " << a << endl; 
    cout << "Valor de b: " << b << endl;
    bool c;
    c = a && b; 
    cout << "Valor de c: " << c << endl;
    //Operador OR
    c = a || b; 
    cout << "Valor de c: " << c << endl;
    //Operador NOT
    c = !a;
    cout << "Valor de c: " << c << endl;

    return 0;
}