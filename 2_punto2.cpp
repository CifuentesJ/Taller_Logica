/* Dados 3 números ingresados determinar cuántos de ellos son iguales: imprimir 3 si los 3 valores son iguales, 2 si al menos dos de los números son iguales o 0 si no hay ningún número igual.*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float v1, v2, v3;

    cout<< "\nIngrese el primer número: ";
    cin>> v1;
    cout<< "Ingrese el segundo número: ";
    cin>> v2;
    cout<< "Ingrese el tercer número: ";
    cin>> v3;

    if (v1==v2 && v1==v3 ){
        cout<< "\nHay " << '3' << " números iguales.";
    }
    else if (v2==v1 || v2==v3 || v3==v1){
        cout<< "\nHay " << '2' << " números iguales.";
    }
    else {
        cout<< "\nNo hay números iguales.";
    }

    return 0;
}