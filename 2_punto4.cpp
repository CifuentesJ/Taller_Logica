/* Hacer un programa en C++ que imprima el aumento y el costo total de una factura la cual tiene un costo original; que sufre un aumento de $20.000 si el material solicitado requiere transporte; de lo contrario no tiene aumento.*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float cosOri, aum, cosTot;
    string res="";
    string Si;
    string si;
    string no;
    string No;

    cout<< "\nIngrese el costo de la factura: ";
    cin>> cosOri;

    cout<< "¿Requiere transporte? Si/No: ";
    cin>> res;

    if (res=="Si" || res=="si"){
        cosTot= cosOri+20000;
        cout<< "\nEl aumento fue de: $20.000" << endl;
        cout<< "El costo total es de: $" << cosTot << endl << endl;
    }

    else if(res=="No" || res=="no"){
        cosTot=cosOri;
        cout<< "\nEl aumento fue de: $0" << endl;
        cout<< "El costo total es de: $" << cosTot << endl << endl;
    }
     
    else {
        cout<< "\nEscriba bien en los campos requeridos. \n";
    } 

    return 0;
}

