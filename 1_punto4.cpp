/* Una persona está interesada en cercar su finca para hacer sembrado de algunos productos. Esta persona hará una distribución en forma de polígono regular (ver zona azul de la siguiente imagen).
Se requiere de un programa en C++ que lea la dimensión de uno de los lados y la menor distancia desde el centro hacia cualquier lado (apotema). sy Muestre el área total de la finca y el alambre total requerido para realizar el cercado. Las fórmulas relacionadas al polígono regular son:

Perímetro #Lados.Dimension Lado; Área = Perímetro. Apotema/2 */

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    float dimLad, ap, at, per, numLad;

    cout<< "\n Ingrese la dimensión de los lados: ";
    cin>> dimLad; 
    cout<< "\n Ingrese apotema: ";
    cin>> ap;
    cout<< "\n Ingrese número de lados: ";
    cin>> numLad;

    per=numLad*dimLad;
    at= (per*ap)/2;
    
    cout<< "\n Área total: " << at <<endl;
    cout<< "\n Alambre total requerido: " << per << endl;




    return 0;
}

