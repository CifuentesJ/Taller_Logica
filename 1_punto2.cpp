/* En la parte alta de la esquina de una habitación se instala una cámara que detecta el movimiento. Para su configuración se requiere conocer la distancia más lejana que hay entre ésta y la parte inferior de la esquina opuesta a la cámara. Para que esto sea posible se requiere leer el largo, el ancho y el alto de la habilitación. Hacer un programa en C++ que use la fórmula de la diagonal de un rectángulo para dar una solución:
Diagonal √Alto² + Ancho² + Largo² */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float alt, anc, lar, diag;
  cout<< "\n Ingrese Ancho en cm: "; 
  cin>> anc;
  cout<< "\n Ingrese Alto en cm: ";
  cin>> alt;
  cout<< "\n Ingrese Largo en cm: ";
  cin>> lar;

  diag= sqrt(pow(anc,2)+pow(alt,2)+pow(lar,2));

  cout<< "\n La distancia más lejana es: " << diag << "cm" << endl;
    
    return 0;
}
