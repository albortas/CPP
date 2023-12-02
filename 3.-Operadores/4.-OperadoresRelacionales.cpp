#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 6;
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    //Operdor iguladad
    bool c;
    c = a == b;
    cout << "Igualdad: " << c << endl;
    //Operador distinto que
    c = a != b;
    cout << "Distinto: " << c << endl;
    //Operador Mayor que
    c = a > b;
    cout << "a mayor que b: " << c << endl;
    //Operador Mayor o Igual que
    c = a >= b;    
    cout << "a mayor o igual que: " << c << endl;
    //Operador Menor que
    c = a < b;        
    cout << "a menor que b: " << c << endl;
    //Operador Menor o igual que
    c = a <= b;        
    cout << "a menor o igual que b: " << c << endl;
    
    return 0;
}