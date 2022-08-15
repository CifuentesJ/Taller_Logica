/* Desarrollar un programa en C++ que permita leer los tres lados de un triángulo (A, B y C). Imprima que tipo de triángulo es teniendo en cuenta que es un triángulo equilátero (sólo si sus tres lados son iguales), es isósceles (si dos de sus lados son iguales) y es un triángulo escaleno (si todos los lados son diferentes). Además, valide que sus lados si permitan formar un triángulo (cada lado tiene que ser menor que la suma de los otros dos). */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float lad1, lad2, lad3, valLad1, valLad2, valLad3;

    cout<< "\nIngrese la medida del lado 1: ";
    cin>> lad1;
    cout<< "Ingrese la medida del lado 2: ";
    cin>> lad2;
    cout<< "Ingrese la medida del lado 3: ";
    cin>> lad3;

    valLad1=lad2+lad3;
    valLad2=lad1+lad3;
    valLad3=lad1+lad2;

    if(valLad1>lad1 && valLad2>lad2 && valLad3>lad3){
        cout<<"\nTriángulo válido." <<endl;
        
        if(lad1==lad2 && lad2==lad3){
        cout<<"Triángulo equilátero." <<endl;
        }
        else if(lad1==lad2 || lad1==lad3 || lad2==lad3){
        cout<<"Triángulo isósceles." <<endl;
        }
        else if(lad1!=lad2 && lad2!=lad3 && lad1!=lad3){
        cout<<"Triángulo escaleno." <<endl;
        }
        else {
        cout<<"\nHubo un error" <<endl;
        }
    }
    else{
        cout<<"\nTriángulo inválido." <<endl;
    }

    return 0;
}