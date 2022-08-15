/* Luego de la caida del puente que comunicaba a los municipios de Medellín y San Jerónimo, se debe tomar una ruta alterna la cual incrementa el tiempo en un 70% y la distancia en un 55%, se pide leer el tiempo y la distancia anterior y determinar el tiempo y la distancia actual. */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    float time0, dis0, incTime, incDis, timeF, disF;

     cout<< "\n Ingrese el tiempo estimado inicial: ";
     cin>> time0;
     cout<< " Ingrese la distancia estimada inicial: ";
     cin>> dis0;

     incTime= time0*0.7;
     incDis= dis0*0.55;
     timeF= time0+incTime;
     disF= dis0+incDis;

     cout<<"\n Tiempo actual en la ruta: " << timeF << endl;
     cout<<" Distancia actual de la ruta: " << disF << endl;



    return 0;
}