#include<iostream>
using namespace std;

int main(){
    // Algoritmo Mayor Edad
    const int EDAD_ADULTO = 18;
    // Solicitamos la edad al usuario
    int edadPersona;
    cout << "Proporcione tu edad: ";
    cin >> edadPersona;
    // Revisamos si es mayor de edad
    if ( edadPersona >= EDAD_ADULTO){
        cout << "Persona con edad " << edadPersona << " es un adulto." << endl;
    }else{
        cout << "Persona con edad " << edadPersona << " es menor de edad." << endl;
    }
}