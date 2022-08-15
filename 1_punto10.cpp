/* Un profesor de matemáticas requiere de un algoritmo para hallar el área de las siguientes figuras geométricas: cubo, rombo, romboide y cilindro. Haga un programa en C++ que tenga en cuenta que las variables de entrada necesarias para hacer los cálculos no se repitan. Además, tenga en cuenta las siguientes fórmulas: 
Área del cubo: 6*L^2
Áread del rombo: diagonal1*diagonal2/2
Área del romboide: base*altura
Área del cilindro: 2*pi*r(altura+base)
*/


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
#define PI M_PI

int main() {
    float ldCub, diag1Romb, diag2Romb, basRoide, altRoide, r, altCil, basCil;
    float aCub, aRomb, aRoide, aCil;

    cout<< "Ingrese lado del cubo: ";
    cin>> ldCub;
    cout<< "Ingrese diagonal 1 del rombo: ";
    cin>> diag1Romb;
    cout<< "Ingrese diagonal 2 del rombo: ";
    cin>> diag2Romb;
    cout<< "Ingrese la base del romboide: ";
    cin>> basRoide;
    cout<< "Ingrese la altura del romboide: ";
    cin>> altRoide;
    cout<< "Ingrese el radio del cilindro: ";
    cin>> r;
    cout<< "Ingrese la altura del cilindo: ";
    cin>> altCil;
    cout<< "Ingrese la base del cilindro: ";
    cin>> basCil;

    //Cubo
    aCub= 6*pow(ldCub,2);
    //Rombo
    aRomb= diag1Romb*diag2Romb/2;
    //Romboide
    aRoide= basRoide*altRoide;
    //Cilindro
    aCil= 2*PI*r*(altCil+basCil);

    cout<< "\nÁrea del cubo: " << aCub;
    cout<< "\nÁrea del rombo: " << aRomb;
    cout<< "\nÁrea del romboide: " << aRoide;
    cout<< "\nÁrea del cilindro: " << aCil;

    return 0;
}