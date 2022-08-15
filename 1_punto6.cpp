/* Una persona emprendedora compra una máquina plana, una fileteadora y una recubridora, cada una con los siguientes descuentos: y 5%, 15% y 18% respectivamente. Hacer un programa en C++ que lea el valor de cada máquina e imprima el valor del descuento, el valor neto de cada una de ellas; además, mostrar el total descontado y total pagado. */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { 
    float mp,fil,rec,valdesmp,valdesfil,valdesrec,valnetmp,valnetfil,valnetrec,totaldes,totalpag;

    cout<< "\n Precio máquina plana: ";
    cin>> mp;
    cout<< "\n Precio filetiadora: ";
    cin>> fil;
    cout<< "\n Precio recubridora: ";
    cin>> rec;    

    valdesmp= mp*0.05;
    valdesfil= fil*0.15;
    valdesrec= rec*0.18;
    valnetmp= mp-valdesmp;
    valnetfil= fil-valdesfil;
    valnetrec= rec-valdesrec;
    totaldes= valdesmp+valdesfil+valdesrec;
    totalpag= valnetmp+valnetfil+valnetrec;

    cout<< "\n Máquina plana" <<endl;
    cout<< "Valor descuento:" << valdesmp <<endl;
    cout<< "Valor neto:" << valnetmp <<endl; 
    cout<< "\n Fileteadora" <<endl;
    cout<< "Valor descuento:" << valdesfil <<endl;
    cout<< "Valor neto:" << valnetfil <<endl;
    cout<< "\n Recubridora" <<endl;
    cout<< "Valor descuento:" << valdesrec <<endl;
    cout<< "Valor neto:" << valnetrec <<endl;
    cout<< "\n Descuento total: " << totaldes <<endl;
    cout<< "\n Total a pagar: " << totalpag <<endl;

    return 0; 
}