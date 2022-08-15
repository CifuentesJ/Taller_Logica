/* Realizar un programa en C++ que calcule el área de un cubo, una esfera, un cono, una pirámide y tetraedro regular (consultar fórmulas). */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;
const double PI=M_PI;

int main() {
    cout.precision(3);
    cout.setf(ios::fixed);
    float ldCub, rEsf, rCon, genCon, aBasPir, aTrianPir, aLatPir, basTri, altTrian;
    float aCub, aEsf, aCon, aPiram, aTetae;
    string cubo; 
    string esfera;
    string cono;
    string piramide;
    string res = "";

    cout<< "¿Qué figura quieres calcular: cubo, esfera, cono o piramide?" << endl;
    cout<< "Escribe tu respuesta igual cómo aparece: ";
    cin>> res;

    //cubo
    if(res == "cubo"){
        cout<< "\nIngrese el lado del cubo: ";
        cin>> ldCub;
        aCub= 6*pow(ldCub,2);
        cout<< "El área del cubo es: " << aCub << endl;
    }
    
    
    //esfera
    else if(res == "esfera"){
        cout<< "\nIngrese el radio de la esfera: ";
        cin>> rEsf;
        aEsf= 4*PI*pow(rEsf,2);
        cout<< "El área de la esfera es: " << aEsf << endl;
    }
     
    //cono
    else if(res == "cono"){
        cout<< "\nIngrese el radio del cono: ";
        cin>> rCon;
        cout<< "\nIngrese la generatriz del cono: ";
        cin>> genCon;
        aCon= PI*rCon*(genCon+rCon);
        cout<< "El área del cono es: " << aCon << endl;
    }

    //pirámide
    else if(res == "piramide"){
        cout<< "\nIngrese la base del tríangulo: ";
        cin>> basTri;
        cout<< "\nIngrese la altura del tríangulo: ";
        cin>> altTrian;
        aTrianPir= basTri*altTrian/2;
        aBasPir= pow(basTri,2);
        aLatPir= 4*aTrianPir;
        aPiram= aBasPir+aLatPir;
        cout<< "El área de la pirámide es: " << aPiram << endl;
    }
    

    else {
        cout<< "Escriba bien la palabra";
    }

    return 0;
}