#include<iostream>
using namespace std;

int main(){
    int a, min = 0, max = 10;
    cout << "Proporcione un valor entre 0 y 10: ";
    cin >> a;
    bool c = a >= min && a <= max;
    cout << "Valor dentro del rango? " << c << endl;
    
    return 0;    
} 