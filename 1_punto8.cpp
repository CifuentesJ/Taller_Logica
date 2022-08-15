/* Desarrollar un programa que permita dar solución a la siguiente ecuación teniendo en cuenta que "X" toma valores aleatorios entre 0 y 50, "Y" toma valores ente -50 y -5, y "W" toma valores entre 1 y 20. Imprimir los valores de X, Y y W para verificar el valor de Z.

Z= X-Y*W/X² */


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    cout.precision(2);
    cout.setf(ios::fixed);
    srand(time(NULL));
    float X, Y, Z, W;

    X= rand()%51;
    Y= -50+rand()%46;
    W= 1+rand()%20;
    Z= X-((Y*W)/pow(X,2));

    cout<< "X: "<< X << endl;
    cout<< "Y: "<< Y << endl;
    cout<< "W: "<< W << endl;
    cout<< "Z: "<< Z << endl;


    return 0;
}