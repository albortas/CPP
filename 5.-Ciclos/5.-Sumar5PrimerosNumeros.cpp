#include<iostream>
using namespace std;

int main(){
    int acumulador;
    for (int numero = 0; numero <= 5; numero++){
        cout << acumulador << " + " << numero << endl;
        acumulador += numero;
        cout << "Suma parcial acumulada: " << acumulador << endl;
    }
    cout << "La suma de los primeros 5 numeros es: " << acumulador << endl;
    return 0;
}