#include <iostream>
using namespace std;

//void cambiarValor(string param){ //se pasa una copia del valor
//Cambiamos los valores por referencia
void cambiarValor(string &param){ // se pasa una direccion de memoria
    param = "Adios";
}

int main(){
    //Ejemplo paso por referencia
    string arg = "Hola";
    cout << "Antes llamar funcion: " << arg << endl;
    cambiarValor(arg);
    cout << "Despues llamar funcion: " << arg << endl;
    return 0;
}