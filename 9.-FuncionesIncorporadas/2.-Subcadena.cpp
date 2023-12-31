#include<iostream>
using namespace std;

int main(){

    string cadena = "Hola Mundo";
    //Subcadena hola y mundo
    //String substr (posicion, cantidad de caracteres a copiar)
    string subcadena1 = cadena.substr(0,4);
    cout << "Subcadena1: " << subcadena1 << endl;
    string subcadena2 = cadena.substr(5,5);
    cout << "Subcadena2: " << subcadena2 << endl;

    return 0;
}