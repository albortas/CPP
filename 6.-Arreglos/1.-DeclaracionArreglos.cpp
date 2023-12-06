#include<iostream>
using namespace std;

int main(){
    //Declaramos el arreglo
    int numeroArreglo[5];
    //Modificamos los valores de un arreglo
    numeroArreglo[0] = 13;
    numeroArreglo[1] = 21;
    numeroArreglo[4] = 62;
    
    //Imprimimos los valores
    for (int i = 0; i < 5; i++){
        cout << "Valor " << i+1 << " Arreglo[" << i <<"]" << " = " << numeroArreglo[i] << endl;
    }
    return 0;
}