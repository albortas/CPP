#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float numero;
    int redondeado, truncado;
    // Redondeo de numero
    numero = 8.5;
    // round -> Mayor .5 redondeo hacia arriba
    redondeado = round(numero);
    cout << "Valor " << numero << " redondeado " << redondeado << endl;

    //trunc -> Omite la parte flotante y solo toma la parte entera
    truncado = trunc(numero);
    cout << "Valor " << numero << " truncado " << truncado << endl;

    return 0;
}