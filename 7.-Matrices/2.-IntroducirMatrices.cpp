#include <iostream>
using namespace std;

int main(){
    // Definimos las variables
    int renglones, columnas;
    cout << "Proporciona los renglones: ";
    cin >> renglones;
    cout << "Proporciona las columnas: ";
    cin >> columnas;
    // Definimos la matriz
    //int matriz[renglones][columnas]; //Sintaxis suele fallar al compilar

    //Usar la siguiente sintaxis
    int **matriz = new int*[renglones];
    for (int i = 0; i < renglones; i++){
        matriz[i] = new int[columnas];
    }
    
    //Solicitar los valores al usuario
    for (int ren = 0; ren < renglones; ren++){
        for (int col = 0; col < columnas; col++){
            cout << "Dato [" << ren << "][" << col << "] = ";
            cin >> matriz[ren][col];
        }
        
    }
    
    
    //Iteramos la matriz
    cout << "-----Iteramos la matriz-----" << endl;
    for (int i = 0; i < renglones; i++){
        cout << "renglones (pivote): " << i << endl;
        for (int j = 0; j < columnas; j++){
            cout << "Matriz [" << i << "][" << j << "] = " << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    //Eliminamos la memoria solicitada
    for (int i = 0; i < renglones; i++)
    {
        delete [] matriz[i];
    }    
    delete [] matriz ;
    
    return 0;
}