/* En un supermercado se requiere de un software para sistematizar unas promociones que se hacen sobre el valor de una compra de acuerdo con un número aleatorio que sale al poner a girar una ruleta (entre 0 y 9). El cliente llega a la caja registradora, pone a girar la ruleta y de acuerdo con este número obtiene los siguientes descuentos: */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    float pre0, preF, des;
    int numAle;

    numAle= rand()%10;

    cout<< "\nIngrese el precio de la compra: ";
    cin>> pre0;
    cout<< "El número es: " << numAle <<endl;

    switch (numAle){
        case 0: case 1: 
            cout<< "Descuento del 5%" <<endl; 
            des=pre0*0.05;
            break;
        case 2: case 3: 
            cout<< "Descuento del 13%" <<endl; 
            des=pre0*0.13;
            break;
        case 4: case 5: 
            cout<< "Descuento del 22%" <<endl; 
            des=pre0*0.22;
            break;
        case 6: case 7: 
            cout<< "Descuento del 30%" <<endl; 
            des=pre0*0.30;
            break;
        case 8: case 9: 
            cout<< "Descuento del 50%" <<endl; 
            des=pre0*0.50;
            break;
        default: cout<< "Hubo un error." <<endl;
            break;
    }

    preF=pre0-des;
    cout<< "El descuento es de: " << des <<endl;
    cout<< "Precio final es: " << preF <<endl;


    return 0;
}