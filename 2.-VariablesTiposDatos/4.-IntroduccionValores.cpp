#include<iostream>
using namespace std;

int main(){
    //1. Declarar la variable
    int entero;
    //2. Solicitamos la entrada al usuario
    cout << "Proporciona un numero: ";
    cin >> entero;
    //3. Desplegamos el valor
    cout << "El numero proporcionado es: " << entero << endl;
    
    //1. Declarar la variable de tipo cadena
    string nombre;
    cout << "Proporciona tu nombre: ";
    //cin >> nombre; // No lee la linea completa, sino hasta un espacio
    cin.ignore(); //Limpiamos el buffer
    getline(cin, nombre);
    cout << "Tu nombre es: " << nombre << endl;
    return 0;
}