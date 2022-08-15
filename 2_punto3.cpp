/* Una nueva calculadora científica permite hallar un cálculo complejo como la raíz cuadrada del triple del valor de (π – x) √𝟑(𝝅−𝒙). Plantear una solución en C++ que haga este cálculo teniendo en cuenta la restricción de la radicación (Si el resultado de esa operación es positivo determinar la raíz, de lo contrario poner un mensaje que diga "Es una raíz imaginaria").*/

#include <iostream>
#include <cmath>
using namespace std;
const double Pi=M_PI;

int main(){
    double res, x, fin;

    cout<< "\nIngrese el número de x: ";
    cin>> x;

    res= Pi-x;

    if (res<0){
        cout<< "\nEl resultado es un número complejo.";
    }
    else{
        fin= sqrt(3*res);
        cout<< "\nEl resultado es: " << fin << endl;
    }


    return 0;
}
