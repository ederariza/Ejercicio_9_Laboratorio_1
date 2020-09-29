/*
Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416
*/

#include <iostream>
using namespace std;
#define PI 3.1416

int main(){

    float radio;
    cout << "Ingrese el radio N: ";
    cin >> radio;
    cout << "Perimetro: " << 2 * PI * radio << endl;
    cout << "Area: " << PI * radio * radio << endl;
    return 0;
}
