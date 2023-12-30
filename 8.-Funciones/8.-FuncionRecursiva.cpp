#include<iostream>
using namespace std;

//Firma de la funcion
void funcionRecursiva(int);

int main(){
    //Imprimir del 1 al 5 de manero recursiva
    int valor = 5;
    funcionRecursiva(valor);
    return 0;
}

//Agregamos la implementacion de la funcion
void funcionRecursiva(int numero){
    if (numero == 1){
        cout << numero << endl;
    }else{
        cout << numero << endl;
        funcionRecursiva(numero - 1);
    }

}