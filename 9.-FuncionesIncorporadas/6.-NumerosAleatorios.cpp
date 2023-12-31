#include<iostream>
using namespace std;

int main(){

    // Iniciamos el generador de numros
    // aleatorios
    srand(time(0));
    //Generamos los valores entre 1 y 100
    int valorAleatorio = (rand()%100 + 1);
    cout << "Valor aleatorio (1 y 100): " << valorAleatorio << endl;

    // Numero aleatorio entre 100 y 200
    int min = 100, max = 200;
    valorAleatorio = rand()% ((max + 1) - min) + min;
    cout << "Valor aleatorio (100 y 200): " << valorAleatorio << endl;

    return 0;
}