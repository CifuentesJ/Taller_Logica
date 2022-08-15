/* En una central telefónica se tiene una tabla con los indicativos de cada una de las ciudades de Colombia y sus tarifas (ver tabla). Desarrolle un programa en C++ que acepte como entrada un indicativo y el número de minutos que se conversó. Mostrar la ciudad, la tarifa por minuto y el valor total que se debe pagar por dicha llamada. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ind;
    float min, tar, valPag;

    cout<< "Ingrese por favor el indicativo: ";
    cin>> ind;
    cout<< "Ingrese por favor los minutos en línea: ";
    cin>> min;

    switch (ind){
        case 1:
            cout<<"Bogotá. Tarifa por min: $50." << endl;
            tar=50;
            break;
        case 2:
            cout<<"Cali. Tarifa por min: $70." << endl;
            tar=70;
            break;
        case 4:
            cout<<"Medellín. Tarifa por min: $100." << endl;
            tar=100;
            break;
        case 5:
            cout<<"Barranquilla. Tarifa por min: $160." << endl;
            tar=160;
            break;
        case 6:
            cout<<"Pereira. Tarifa por min: $180." << endl;
            tar=180;
            break;
        case 7:
            cout<<"Cúcuta. Tarifa por min: $190." << endl;
            tar=190;
            break;  
        case 9:
            cout<<"San Andrés. Tarifa por min: $200." << endl;
            tar=200;
            break;          
        default:
            cout<<"Hubo un error o el número no es válido." << endl;
            break;
    }
    if(tar>0){
        valPag=min*tar;
        cout<<"El valor a pagar es: $" << valPag << endl;
    }

    return 0;
}