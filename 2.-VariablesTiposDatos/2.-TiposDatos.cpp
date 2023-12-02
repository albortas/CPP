#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //Tipo Entero
    int entero = 10;
    cout << "Entero: " << entero << endl;
    //Tipo Flotante
    float flotante = 8.9;
    cout << fixed << setprecision(2);
    cout << "Flotante: " << flotante << endl;
    // Tipo doble
    double doble = 9.9999;
    cout << "Doble: " << doble << endl;
    //Tipo caracter
    char caracter = 'A';
    char caracterDecimal = 65;
    cout << "Caracter: " << caracter << endl;
    cout << "Caracter en Decimal: " << caracterDecimal << endl;
    //Tipo booleano
    bool booleano = true;
    cout << "Booleano: " << booleano << endl;
    //Cadena (como en el leguaje C)
    char cadena1[] = "Hola Munddo";
    cout << "Cadena 1: " << cadena1 << endl;
    //Usando la clase string
    string cadena2 = "Adios";
    cout << "Cadena 2: " << cadena2 << endl;
    
    
    return 0;
}