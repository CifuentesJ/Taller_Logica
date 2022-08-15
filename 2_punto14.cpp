/* Desarrolle un algoritmo que permita dar solución a:
𝑥=−𝑏±√𝑏2−4𝑎𝑐/2𝑎 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float b, a, c, disc, x1, x2; // disc= discriminante

    cout<< "Ingrese el valor de a: ";
    cin>> a;
    cout<< "Ingrese el valor de b: ";
    cin>> b;
    cout<< "Ingrese el valor de c: ";
    cin>> c;

    disc= pow(b,2)-4*a*c; 

    if (disc>0){
        x1= (-b+sqrt(disc))/(2.0*a);
        x2= (-b-sqrt(disc))/(2.0*a);
        cout<< "\nDiscriminante: " << disc << endl;
        cout<< "\nLa solución de x1: " << x1 << endl; 
        cout<< "La solución de x2: " << x2 << endl;
    }
    else if (disc<0){
        cout<<"\nHay una raíz imaginaria.";
    }
    else{
        cout<<"Hubo un error.";
    }
    return 0;
}