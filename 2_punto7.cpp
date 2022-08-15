/* Hacer un programa en C++ que lea la masa atómica de un elemento químico. Imprima el nombre de ese elemento, teniendo en cuenta que la masa del Hidrógeno es 1.01; la del Oxigeno es 16; la del Litio es 6.94; la del Berilio es 9.01; la del Nitrógeno es 14.01; la del Flúor es 19; la del Aluminio es 26.98 y la del Sodio es 22.99. */

#include <iostream>
using namespace std;

int main(){
    float masAna, masHid, masOxi, masLit, masBer, masNit, masFlu, masAlu, masSod;

    cout<< "\nIngrese la masa atómica de el elemento químico: ";
    cin>> masAna;

    masHid=1.01;
    masOxi=16;
    masLit=6.94;
    masBer=9.01;
    masNit=14.01;
    masFlu=19;
    masAlu=26.98;
    masSod=22.99;

    if (masAna==masHid){
        cout<< "\nHidrógeno: " << masHid << "\n " ; 
    }
    else if (masAna==masOxi){
        cout<< "\nOxígeno: " << masOxi << "\n " ; 
    }
    else if (masAna==masLit){
        cout<< "\nLitio: " << masLit << "\n " ; 
    }
    else if (masAna==masBer){
        cout<< "\nBerilio: " << masBer << "\n " ; 
    }
    else if (masAna==masNit){
        cout<< "\nNitrógeno: " << masNit << "\n " ; 
    }
    else if (masAna==masFlu){
        cout<< "\nFlúor: " << masFlu << "\n " ; 
    }
    else if (masAna==masAlu){
        cout<< "\nAluminio: " << masAlu << "\n " ; 
    }
    else if (masAna==masSod){
        cout<< "\nSodio: " << masSod << "\n " ; 
    }
    else {
        cout<< "\n¡Error!\nNo hay elemento químico con esa masa atómica." << "\n " ; 
    }

    return 0;
}