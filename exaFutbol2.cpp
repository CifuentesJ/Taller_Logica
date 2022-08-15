#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

/* En el clásico de la ciudad se enfrentaron Nacional y Medellín. Al terminar el partido se requería hacer un conteo de los hinchas de cada equipo, el total de hinchas que ingresaron y el promedio de edad en general.

Se solicitará a cada hincha el equipo de su preferencia teniendo el cuenta los códigos: 1-Nacional, 2-Medellín y 3-Otro diferente y la edad. El proceso se realizará hasta que se digite un * en el nombre del equipo.

Se debe imprimir la cantidad que representan los hinchas en las 3 categorías, el total de hinchas y el promedio de edad; teniendo en cuenta el formato de salida del ejemplo.
 */
int main() {
    int contM=0, contN=0, contO=0, contTot=0;
    char cat;
    float acumHin=0, edad;
    cout.setf(ios::fixed);

    while(true){
        cin>>cat;
        if(cat=='*'){
            break;
        }
        cin>>edad;

        switch(cat){
            case '1': contN++; break;
            case '2': contM++; break;
            case '3': contO++; break;
        }
        
        acumHin+=edad;
        contTot++;
    }   

    cout<<contN<<" HINCHAS DE NACIONAL"<<endl;
    cout<<contM<<" HINCHAS DE MEDELLIN"<<endl;
    cout<<contO<<" HINCHAS DE OTROS EQUIPOS"<<endl;
    cout<<contTot<<" TOTAL HINCHAS"<<endl;
    cout.precision(2);
    cout<<acumHin/contTot<<" PROMEDIO DE EDAD"<<endl;
    return 0;
}
