#include<iostream>
using namespace std;

int main(){
    int contador = 0, repeticiones = 5;
    while (contador < repeticiones){
        cout << "Buenos dias..." << contador << endl;
        contador++;
        bool condicion = contador < repeticiones;
        cout << contador << " < " << repeticiones << " -> " << condicion << endl;
    }
    cout << "Estamos fuera del ciclo while" << endl;
}