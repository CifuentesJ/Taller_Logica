// El costo de la entrada a un parque de diversión depende de la edad de la persona: Si la persona tiene más de un año y menos de 3 años entra gratis; si tiene entre 3 y 7 años paga $2.000. Si tiene entre 8 y 16 años paga $3.000. Si tiene entre 17 y 35 años paga $3.500. Y si tiene más de 35 paga $4.000. Hacer un programa en C++ que permita determinar este costo de entrada. 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float edad;

    cout<< "\nIngrese la edad (en años) de la persona a ingresar: ";
    cin>> edad;

    if (edad>1 && edad<3){
        cout<< "Entras gratis";
    }
    else if (edad>=3 && edad<=7){
        cout<< "Tu entrada cuesta $2.000";
    }
    else if (edad>=8 && edad<=16){
        cout<< "Tu entrada cuesta $3.000";
    }
    else if (edad>=17 && edad<=35){
        cout<< "Tu entrada cuesta $3.500";
    }
    else if (edad>35){
        cout<< "Tu entrada cuesta $4.000";
    }
    else{
        cout<< "No puede entrar o hubo un error";
    }
    return 0;
}
