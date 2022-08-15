#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Los equipos de fútbol de la capital antioqueña: Nacional y Medellín: tienen programados una serie de partidos para el próximo año. Por tal motivo se te ha contratado para poder hacerle un seguimiento a ambos equipos durante cada una de las fechas. Se leerán resultados hasta que los goles de ambos equipos sean iguales a -1.

Al final hay que imprimir un reporte con la siguiente información:
Imprimir quien gana en cada enfrentamiento NACIONAL, MEDELLIN o EMPATE.
La cantidad de veces que ganó Medellín.
La cantidad de veces que ganó Nacional.
La cantidad de empates (igual cantidad de goles).
Al final imprimir "CAMPEON NACIONAL", si fue este equipo quien ganó más partidos en el año, "CAMPEON MEDELLIN", si fue este equipo quien ganó más partidos en el año y "NO HAY CAMPEON EN ANTIOQUIA", en caso de que ambos equipos tengan el mismo número de partidos ganados en el año.

La entrada de este problema consta de dos números enteros N y M, los cuales corresponden a los goles anotados por Atlético Nacional e Independiente Medellín, respectivamente.

Se debe imprimir un informe con la siguiente estructura, en caso de que Nacional y Medellín hayan ganado cada uno de a 1 partido y hayan empatado dos partidos en ese mismo orden:
GANO NACIONAL
GANO MEDELLIN
EMPATE
EMPATE
NACIONAL GANO: 1 PARTIDO(S)
MEDELLIN GANO: 1 PARTIDO(S)
CANTIDAD DE EMPATES: 2
NO HAY CAMPEON EN ANTIOQUIA
 */


int main() {
    int N, M;
    int contN=0, contM=0, contEmp=0;

    while(true){
        cin>>N>>M;
        if(N==-1 && M==-1){
            break;
        }

        if(N>M){
            contN++;
            cout<<"GANO NACIONAL"<<endl;
        }
        else if(M>N){
            contM++;
            cout<<"GANO MEDELLIN"<<endl;
        }
        else{
            contEmp++;
            cout<<"EMPATE"<<endl;
        }
    }

    cout<<"NACIONAL GANO: "<<contN<<" PARTIDO(S)"<<endl;
    cout<<"MEDELLIN GANO: "<<contM<<" PARTIDO(S)"<<endl;
    cout<<"CANTIDAD DE EMPATES: "<<contEmp<<endl;
    if(contN>contM){
        cout<<"CAMPEON NACIONAL"<<endl;
    }
    else if (contM>contN){
        cout<<"CAMPEON MEDELLIN"<<endl;
    }   
    else {
        cout<<"NO HAY CAMPEON EN ANTIOQUIA"<<endl;
    }     
    return 0;
}