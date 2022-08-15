/* Desarrollar un programa en C++ que imprima el significado de unas iniciales relacionadas con la clasificación por edades de una película. Tenga en cuenta los siguientes significados: */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ini;

    cout<< "Ingrese el número que corresponde: " <<endl;
    cout<< "\tCE: 1" <<endl;
    cout<< "\tCP: 2" <<endl;
    cout<< "\tRE: 3" <<endl;
    cout<< "\tSM: 4" <<endl;
    cout<< "\tGC: 5" <<endl;
    cout<< "Número: ";
    cin>> ini;

    switch (ini){
        case 1:
            cout<< "General. Todas las audiencias.";
            break;
        case 2:
            cout<< "Guía paternal. Compañía de padres.";
            break;
        case 3:
            cout<< "Restringido. Solo mayores de 12 años.";
            break;
        case 4:
            cout<< "Solo menores de edad.";
            break;
        case 5:
            cout<< "Guía censurada. Solo mayores de edad.";
            break;
        default:
            cout<< "Hubo un error o no digitó bien.";
            break;
    }

}