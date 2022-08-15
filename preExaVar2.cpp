// Agencia de viajes

#include <iostream>
using namespace std;

int main(){
    int N, medTrans, contM=0, contF=0, contB=0, contL=0, contK=0, contP=0, contR=0, contTot=0;
    int contAv=0, contVe=0, contBar=0;
    char des;
    double pasaj, acumPasBar=0, acumPasVe=0, acumPas=0;

    cout<<"Ingrese el número de personas: ";
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<"Ingrese ciudad de destino: ";
        cin>>des;
        cout<<"Ingrese el valor del pasaje: ";
        cin>>pasaj;
        cout<<"Ingrese el medio de transporte: ";
        cin>>medTrans;
        
        switch (des){
            case 'M': contM++; break;
            case 'F': contF++; break;
            case 'B': contB++; break;
            case 'L': contL++; break;
            case 'K': contK++; break;
            case 'P': contP++; break;
            case 'R': contR++; break;
        }
        
        switch (medTrans){
            case 1: contAv++; break;
            case 2: contVe++; acumPasVe+=pasaj; break;
            case 3: contBar++; acumPasBar+=pasaj; break;
        }

        acumPas+=pasaj;
    }

    cout<<"\n% Madrid: "<<(float)contM/N*100<<endl;
    cout<<"% Florida: "<<(float)contF/N*100<<endl;
    cout<<"% Bogotá: "<<(float)contB/N*100<<endl;
    cout<<"% La Habana: "<<(float)contL/N*100<<endl;
    cout<<"% Kingstons: "<<(float)contK/N*100<<endl;
    cout<<"% París: "<<(float)contP/N*100<<endl;
    cout<<"% Roma: "<<(float)contR/N*100<<endl;
    cout<<"Viajan en avión: "<<contAv<<endl;
    cout<<"Promedio barco: "<<acumPasBar/contBar<<endl;
    cout<<"Valor pasaje vehículo: "<<acumPasVe<<endl;
    cout<<"Pasaje promedio: "<<acumPas/N<<endl;
    return 0;
}