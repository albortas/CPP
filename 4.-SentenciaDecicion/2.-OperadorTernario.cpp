#include<iostream>
using namespace std;

int main(){
    int numero;
    cout << "Proporcione un numero: ";
    cin >> numero;
    (numero > 0)? cout << "Valor positivo: " << numero << endl :
    cout << "Valor Cero o negativo: " << numero <<endl;
    return 0;
}