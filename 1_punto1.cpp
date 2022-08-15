/* Un investigador desea conocer todos los datos equivalentes a la edad de un fósil ingresada en años. Para esto se requiere de un programa en C++ que calcule e imprima la cantidad de siglos, décadas, meses y días equivalentes. Tenga en cuenta que un 1 año tiene 12 meses y 365 días; 1 década tiene 10 años y 1 siglo 100 años. */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    cout.precision(3);
    cout.setf(ios::fixed);
    float edFosil, siglos, decadas, meses;
    double dias;
  
    cout<< "Ingrese los años del fósil: ";
    cin>> edFosil;
  
    siglos= edFosil/100;
    decadas= edFosil/10;
    meses= edFosil*12;
    dias= edFosil*365;

    cout<< "\n Siglos: " << siglos << endl;
    cout<< "\n Décadas " << decadas << endl;
    cout<< "\n Meses: " << meses << endl;
    cout<< "\n Días: " << dias << endl;
  
    return 0;
}

