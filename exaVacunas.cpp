#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* En un puesto de vacunación, hay N cantidad de vacunas de COVID-19 y se promedia que cada hora aplican P cantidades de vacunas a la población. Se necesita saber a qué horas y en cuál jornada se van a terminar las vacunas, sabiendo que se empiezan a aplicar a una hora X de la mañana.
Se maneja el formato de tiempo con 24 horas, siendo de 6 a 12 la jornada del día y de 12 a 18 la jornada de la tarde.

La primera línea se ingresan dos variables enteras separadas por un espacio N y P, que corresponden al número de vacunas que hay en el puesto y el promedio de dosis que aplican a la población en una hora, respectivamente.

En la segunda línea se lee una variable entera X que hace referencia a la hora en que empieza el puesto de vacunación a realizar su labor.

La salida para este reto consiste en imprimir la hora y jornada en las que se terminarían las dosis del puesto de vacunación: JORNADA DEL DIA o JORNADA DE LA TARDE. Mirar ejemplos de entrada y salida.
*/

int main() {
    int N, P, X, contHor=0, final;

    cin>>N>>P;
    cin>>X;

    while (N>P){
        N-=P;
        contHor++;
    }

    final=contHor+X;

    if(final<12){
        cout<<"LAS VACUNAS SE TERMINARAN SOBRE LAS "<< final <<" HORAS EN LA JORNADA DEL DIA."<<endl;
    }
    else{
        cout<<"LAS VACUNAS SE TERMINARAN SOBRE LAS "<< final <<" HORAS EN LA JORNADA DE LA TARDE."<<endl;
    }
    return 0;
}
