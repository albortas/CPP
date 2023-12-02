#include<iostream>
using namespace std;

int main(){
    //Revisar si es un valor positivo
    int miNumero = 10;
    cout << "Proporcione un numero: ";
    cin >> miNumero;
    if (miNumero > 0){
        cout << "Valor positivo: " << miNumero << endl;
    }else if (miNumero < 0){
        cout << "Valor negativo: " << miNumero << endl;
    }else{
        cout << "Valor es cero: " << miNumero << endl;
    }
}