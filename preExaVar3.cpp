// Parqueadero

#include <iostream>
using namespace std;

int main(){
    int numLlan, cont4Llan=0, cont2Llan=0;
    double peso, valor, pesMin=25, valAlt=1000000;
    bool band=false;

    while (true){
        cout<<"Ingrese el número de llantas: ";
        cin>>numLlan;
        if(numLlan==0){
            break;
        }
        cout<<"Ingrese el peso: ";
        cin>>peso;
        cout<<"Ingrese el valor: ";
        cin>>valor;

        switch(numLlan){
            case 2: cont2Llan++; break;
            case 4: cont4Llan++; break;
        }

        if(peso<pesMin){
            pesMin=peso;
        }
        if(valor>valAlt){
            valAlt=valor;
        }
        if(numLlan>16){
            band=true;
        }
    }
    cout<<"Cantidad vehic. 2 llan: "<<cont2Llan<<endl;
    cout<<"Cantidad vehic. 4 llan: "<<cont4Llan<<endl;
    cout<<"Peso mínimo: "<<pesMin<<endl;
    cout<<"Valor más alto: "<<valAlt<<endl;
    cout<<(band?"Sí hay +16 llant.":"No hay +16 llant");
    return 0;
}