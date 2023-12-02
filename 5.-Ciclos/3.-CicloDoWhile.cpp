#include<iostream>
using namespace std;

int main(){
    int numero;
    //bool condicion;
    do{
        cout << "Proporcione un numero positivo: ";
        cin >> numero;
        //condicion = numero > 0;
        //Se repite mientras NO sea positivo
    }while (numero <= 0);
        cout << "Valor positivo proporcionado: " << numero << endl;    
} 