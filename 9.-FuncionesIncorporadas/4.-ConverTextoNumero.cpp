#include<iostream>
using namespace std;

int main(){
    // Convertir cadena a numero, funcion stoi
    // stoi - string to int
    string a = "10", b = "20";
    int c = stoi(a) + stoi(b);
    cout << c << endl;

    return 0;
}