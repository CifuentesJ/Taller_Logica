/* Elaborar un programa en C++ que calcule la nota definitiva de un estudiante,teniendo en cuenta que la nota definitiva consta de 4 notas, donde las dos primeras valen un 10% y las otras dos 40%. Imprimir la nota definitiva del estudiante y un mensaje que diga “Ganó. Felicitaciones” si la nota definitiva es mayor o igual a 3.0. Imprimir “Debe habilitar” si perdió la materia con una nota definitiva menor a 3.0 y mayor igual a 2.5 y si la nota definitiva es menor a 2.5 imprima un mensaje “Perdió. Debe repetir”. Se deben leer los datos del estudiante y sus respectivas notas. */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float not1, not2, not3, not4, def;
    string nom, ape;

    cout<< "Ingrese su nombre y apellido: ";
    cin>> nom >> ape;
    cout<< "Ingrese la nota 1: ";
    cin>> not1;
    cout<< "Ingrese la nota 2: ";
    cin>> not2;
    cout<< "Ingrese la nota 3: ";
    cin>> not3;
    cout<< "Ingrese la nota 4: ";
    cin>> not4;

    def= (not1*0.1)+(not2*0.1)+(not3*0.4)+(not4*0.4);
    
    if (def>5 ){
        def= def/10;
    }
    if (def>=3.0 || def>=30){
        cout<< "\n" << nom <<", ganó. Felicitaciones.\n" <<  "Definitiva: " << def << endl << endl;
    }
    else if((def<3.0 && def>=2.5) || (def<30 && def>=25) ){
        cout<< "\n" << nom << ", debe habilitar.\n" << "Definitiva: " << def << endl << endl;
    }
    else if( def<2.5 || def<25 ){
        cout<< "\n" << nom << ", perdió. Debe repetir.\n" << "Definitiva: " << def << endl << endl;
    }
    else{
        cout<< "\nOcurrió un error.\n" ;
    }
    return 0;
}