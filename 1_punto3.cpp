/*La parte central de una institución universitaria tiene forma circular. Para iniciar el nuevo año se tomó la decisión de cambiar todo el piso y comprar una nueva baldosa. La persona encargada del trabajo requiere conocer el área total de la misma. Hacer un programa en C++ que permita ingresarle la distancia que hay desde el centro a cualquiera de los extremos (radio del círculo) e imprima el área total usando la siguiente fórmula:
Área de Circunferencia = pi. Radio²*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;
const double pi=M_PI;

int main() {
    cout.precision(2);
    cout.setf(ios::fixed);

    float r, arCir;

    cout << "\n Distancia desde el centro a extremo: ";
    cin>> r;

    arCir= pi*pow(r,2);

    cout<< "\n Área de la circunferencia: " << arCir << endl;
    return 0;
}
