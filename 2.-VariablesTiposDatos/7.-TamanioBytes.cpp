#include<iostream>
using namespace std;

int main(){
    //sizeof
    int entero = 10;
    float flotante = 2.8;
    double doble = 6.9999;
    char caracter = 'A';
    string cadena = "Hola Mundo";
    char cadena1[] = "Adios";
    bool boleano = false;
    //Imprimir cada variable (tamanio bytes)
    cout << "int tamanio bytes: " << sizeof(entero) << endl;
    cout << "float tamanio bytes: " << sizeof(flotante) << endl;
    cout << "double tamanio bytes: " << sizeof(doble) << endl;
    cout << "char tamanio bytes: " << sizeof(caracter) << endl;
    cout << "bool tamanio bytes: " << sizeof(boleano) << endl;
    cout << "arreglo cadena tamanio bytes: " << sizeof(cadena1) << endl;
    cout << "string tamanio bytes: " << sizeof(cadena) << endl;
    cout << "string tamanio length: " << cadena.length() << endl;
    cout << "string tamanio size: " << cadena.size() << endl;
 
    return 0;
}
