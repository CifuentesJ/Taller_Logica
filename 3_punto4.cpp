/* En el centro de la ciudad hay un almacén con ventas a crédito. Allí se ofrecen descuentos de acuerdo con el número de personas que lleguen referidas por alguno de sus clientes. Si el número de referidos es uno o dos se le ajustará su deuda en el almacén al 70% de la misma; si los referidos son tres, cuatro o cinco, se le ajustará la deuda al 60% y si supera los cinco referidos, se le ajustará la deuda a tan sólo el 40%. Realizar un programa en C++ que permita ingresar a cada cliente el valor de la deuda y el número de referidos y muestre el valor descontado y el valor actual de la deuda después del ajuste. El ciclo se realiza mientras el valor de la deuda sea un valor positivo */

#include <iostream>
using namespace std;

int main(){
    int ref;
    double val0, desc, valF;

    cout<<"\nIngrese el valor de la deuda: ";
    cin>>val0;
    
    while (val0>0){

        cout<<"Ingrese el # de referidos: ";
        cin>>ref;
        
        if (ref>0){
            switch (ref){
            case 1: case 2:
                desc=val0*0.3;
                valF=val0-desc;
                break;
            case 3: case 4: case 5:
                desc=val0*0.4;
                valF=val0-desc;
                break;
            default:
                desc=val0*0.6;
                valF=val0-desc;
                break;
            }
            cout<<"\nEl descuento es de: "<<desc<<"\n"<<"El valor después de ajuste es: " <<valF << endl;
        }
        else{
            cout<<"\nUsted no tiene referidos, no se le puede hacer descuento.";
        }
        cout<<"\n\nIngrese el valor de la deuda: ";
        cin>>val0;

    }

    return 0;
}