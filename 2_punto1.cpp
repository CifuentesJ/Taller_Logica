/* Hacer un programa en C++ que muestre el valor máximo de un grupo de 3 valores ingresados. */

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

    if (v1>v2 && v1>v3){
        cout<< "\nEl número mayor es: " << v1 << endl << endl;
    }
    else if (v2>v1 && v2>v3){
        cout<< "\nEl número mayor es: " << v2 << endl << endl;
    }
    else {
        cout<< "\nEl número mayor es: " << v3 << endl << endl;
    }


    return 0;
}
