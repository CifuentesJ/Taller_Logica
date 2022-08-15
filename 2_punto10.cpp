/* La categoría de un neumático se determina por su desgaste y su tracción. Se requiere de un programa en C++ que permita leer de un neumático estos dos datos y muestre su clasificación (la clasificación es un número entre 1 y 6), dependiendo de las siguientes condiciones:*/
/* Categoría      Desgaste        Tracción
    1       Inferior a 100      Buena
    2       Inferior a 100      Regular
    3       Inferior a 100      Mala
    4   Superior o igual a 100  Buena
    5   Superior o igual a 100  Regular
    6   Superior o igual a 100  Mala */ 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float des;
    string buena, Buena, regular, Regular, mala, Mala;
    string trac;

    cout<< "\nIngrese el desgaste de la llanta: ";
    cin>> des;
    cout<< "¿La llanta tiene una tracción buena, regular o mala?: ";
    cin>> trac;

    if (des<100 && (trac=="Buena" || trac=="buena")){
        cout<< "\nLa categoría es 1" <<endl <<endl;
    }
    else if (des<100 && (trac=="Regular" || trac=="regular")){
        cout<< "\nLa categoría es 2" <<endl <<endl;
    }
    else if (des<100 && (trac=="Mala" || trac=="mala")){
        cout<< "\nLa categoría es 3" <<endl <<endl;
    }
    else if (des>=100 && (trac=="Buena" || trac=="buena")){
        cout<< "\nLa categoría es 4" <<endl <<endl;
    }
    else if (des>=100 && (trac=="Regular" || trac=="regular")){
        cout<< "\nLa categoría es 5" <<endl <<endl;
    }
    else if (des>=100 && (trac=="Mala" || trac=="mala")){
        cout<< "\nLa categoría es 6" <<endl <<endl;
    }
    else{
        cout<<"\nHubo un error inesperado, inténtelo nuevamente." << endl <<endl;
    }


    return 0;
}