/* Hacer un programa en C++ que encuentre la forma de resolver la siguiente ecuación, validando que la operación
que va en el divisor sea diferente de cero. 𝐸𝑐𝑢𝑎𝑐𝑖ó𝑛 =
𝐿 (𝑛−3)/𝑛^2+𝑥 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float ecu, L, num, den, n, x;

    cout<< "\nIngrese L: ";
    cin>> L;
    cout<< "Ingrese n: ";
    cin>> n;
    cout<< "Ingrese x: ";
    cin>> x;

    num= L*(n-3);
    den= pow(n,2)+x;

    if (den!=0){
        ecu= num/den;
        cout<< "\nLa ecuación es: " << ecu << endl << endl;
    } 
    else if (den==0){
        cout<< "\n¡Error!\nNo se puede dividir por cero. ";
    }
    else{
        cout<< "\nHubo un error inesperado. ";
    }
    return 0;
}