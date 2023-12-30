#include<iostream>
using namespace std;

//Variables globales
int variablesGlobales = 5;
int a = 10;

// Definimos metodo cambio
void cambio(int variableLocalFuncion){
    // Cambiamos el valor de la variableLocalFuncion
    variableLocalFuncion = 40;
    // Creamos una variable local (ocultar a la global)
    int a = 50;
    int b = 60;
    // Cambio variable global
    variablesGlobales = 70;
    cout << "Variable local (funcion): " << variableLocalFuncion << endl;
    cout << "Variable local a (funcion): " << a << endl;
    // Scope resolution operador ::
    cout << "Variable global a (funcion): " << ::a << endl;
    cout << "Variable local b (funcion): " << b << endl;
}

int main(){
    // Ejercicio Alcance Variables
    int variableLocal = 20;
    // Accedemos a la variable globales
    cout << "Variables global a (principal): " << a << endl;
    //Modificar la variable global
    a = 30;
    //Llamamos la funcion de cambio
    cambio(variableLocal);
    cout << "Variables local (principal): " << variableLocal << endl;
    cout << "Variables global a (principal): " << a << endl;
    cout << "Variables global (principal): " << variablesGlobales << endl;
    return 0;
}