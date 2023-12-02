#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //1. Definimos las varibles a utilizar
    int edad;
    bool empleadoConfianza;
    string nombreCompleto;
    float sueldo;
    //Solicitmos los valores al usuario
    cout << "Proporciona tu nombre: ";
    getline(cin, nombreCompleto);
    cout << "Proporciona tu edad: ";
    cin >> edad;
    cout << "Proporciona tu sueldo: ";
    cin >> sueldo;
    cout << "Eres empleado de confianza (1 / 0): ";
    cin >> empleadoConfianza;
    //Mostramos los valores
    cout << "\nLa informacion proporcionada es: " << endl;
    cout << "Nombre: " << nombreCompleto << endl;
    cout << "Edad: " << edad << endl;
    cout << fixed << setprecision(2);
    cout << "Sueldo: " << sueldo << endl;
    cout << "Empleado de confianza: " << empleadoConfianza << endl;

}