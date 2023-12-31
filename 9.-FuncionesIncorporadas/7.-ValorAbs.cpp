#include<iostream>
using namespace std;

int main(){

    int numero, numeroAbs;
    cout << "Proporciona una valor numerico: ";
    cin >> numero;
    numeroAbs = abs(numero);
    cout << "Valor absoluto de " << numero << " es: " << numeroAbs << endl;

    return 0;
}