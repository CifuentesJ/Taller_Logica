//Zoológico

#include <iostream>
using namespace std;

int main(){
    int  contCuad=0, contBip=0, contAni=0;
    float numPat, peso, est, pesMay=1, estMen=4;
    bool band=false;

    while (true){
        cout<<"Ingrese el número de patas o -1 para terminar: ";
        cin>>numPat;
        if(numPat==-1){
            break;
        }

        cout<<"Ingrese el peso: ";
        cin>>peso;
        cout<<"Ingrese la estatura: ";
        cin>>est;

        if (numPat==4){ //cuadrúpedo
            contCuad++;
        }
        if (numPat==2){//bípedo
            contBip++;
        }
        if (peso>pesMay){ //peso Mayor
            pesMay=peso;
        }
        if (est<estMen){ //estatura Menor
            estMen=est;
        }
        if (numPat>6){
            band=true;
        }

        contAni++;
    }

    cout<<"\nCuadrúpedos: "<<contCuad<<endl;
    cout<<"Bípedos: "<<contBip<<endl;
    cout<<"Total animales: "<<contAni<<endl;
    cout<<"Peso Mayor: "<<pesMay<<endl;
    cout<<"Estatura Menor: "<<estMen<<endl;
    cout<<(band?"Si hay +6":"No hay +6");

    return 0;
}