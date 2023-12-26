#include <iostream>
using namespace std;

int main(){
    // Definir constantes tamanio matriz
    const int RENGLONES = 2;
    const int COLUMNAS = 3;
    // Definimos la matriz y llenamos la matriz
    int matriz[RENGLONES][COLUMNAS] = {
        {100,200,300},
        {400,500,600}
    };
    //Llenamos la matriz manualmente
    /* matriz[0][0] = 100;
    matriz[0][1] = 200;
    matriz[0][2] = 300;
    matriz[1][0] = 400;
    matriz[1][1] = 500;
    matriz[1][2] = 600; */

    //Acceder a los elementos
    /* cout << "Valor 1 [0][0] = " << matriz [0][0] << endl;
    cout << "Valor 6 [1][2] = " << matriz [1][2] << endl; */

    //Iteramos la matriz
    cout << "-----Iteramos la matriz-----" << endl;
    for (int i = 0; i < RENGLONES; i++){
        cout << "renglones (pivote): " << i << endl;
        for (int j = 0; j < COLUMNAS; j++){
            cout << "Matriz [" << i << "][" << j << "] = " << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    


    return 0;
}