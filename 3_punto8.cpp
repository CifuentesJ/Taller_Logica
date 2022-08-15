/* En una empresa de teléfonos se realizaron un total de 100 llamadas. Hacer un programa en C++ que lea el número marcado, la duración de la llamada (en minutos). Imprima si fue la llamada fue hecha a un celular o a un teléfono fijo. Los números de teléfono celular tienen 10 dígitos y los del teléfono 7. Finalmente, imprimir el valor de cada llamada teniendo en cuenta que el minuto a celular está a $200 y para los teléfonos fijos está a $250. */

#include <iostream>
using namespace std;

int main(){
    float minLlam, cost, costLlam, lon;
    string numMar;
  
    cout<<"Ingrese el número marcado: ";
    cin>>numMar;
    cout<<"Ingrese los minutos en llamada: ";
    cin>>minLlam;

    
    for (int i=1; i<=100; i++){
        lon= numMar.size();

        if (lon==10){
            cout<<"\nLlamada a un celular."<<endl;
            cost=200;
        }
        else if (lon==7){
            cout<<"\nLlamada a un teléfono fijo."<<endl;
            cost=250;
        }
        else {
            cout<<"\nNúmero ingresado no válido."<<endl;
        }

        costLlam=minLlam*cost;
        cout<<"Valor llamada: "<< costLlam<< endl;

        cout<<"\n\nIngrese el número marcado: ";
        cin>>numMar;
        cout<<"Ingrese los minutos en llamada: ";
        cin>>minLlam;
    }

    return 0;
}