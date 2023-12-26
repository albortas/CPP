#include<iostream>
using namespace std;

int main(){
    //Declaramos el arreglo
    //const int largoArreglo = 5;
    cout << "Proporciona el largo del arreglo: ";
    int largoArreglo;
    cin >> largoArreglo;
    //int numeroArreglo[largoArreglo];
    int *numerosArreglo = new int[largoArreglo];
    
    //Modificamos los valores de un arreglo
    for (int i = 0; i < largoArreglo; i++)
    {
        cout << "Proporciona el valor " << i + 1 << ": ";
        cin >> numerosArreglo[i];
    }    
       
    //Imprimimos los valores
    for (int i = 0; i < largoArreglo; i++){
        cout << "Valor " << i+1 << " Arreglo[" << i <<"]" << " = " << numerosArreglo[i] << endl;
    }

    return 0;
}