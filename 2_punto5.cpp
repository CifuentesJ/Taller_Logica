/* En las pruebas ICFES se presentan dos tipos pruebas, una de aptitud matemática y otra de lenguaje. Hacer un programa en C++ que lea el nombre y los puntajes obtenidos por un estudiante en cada prueba. Imprima su nombre y la prueba en la cual obtuvo el mayor puntaje o si fueron iguales.*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float mat, len;
    string nom= "";
    string nom2= "";
    string ape= "";
    string ape2= "";

    cout<< "Escriba su nombre completo: ";
    cin>> nom >> nom2 >> ape >> ape2; //cómo omitir varias entradas debido a que alguien no tenga segundo nombre o así
    cout<< "Escriba el puntaje de matemáticas: ";
    cin>> mat;
    cout<< "Escriba el puntaje de lenguaje: ";
    cin>> len;

    cout<< "\nEstudiante: " << nom << " " << nom2 << " " << ape  << " " << ape2;

    if (mat>len){
        cout<< endl << "El mayor puntaje fue matemáticas con: " << mat << endl << endl;
    }
    else if (len>mat){
        cout<< endl << "El mayor puntaje fue lenguaje con: " << len << endl << endl;
    }
    else if (mat==len){
        cout<< endl << "Obtuvo puntaje igual." << endl;
        cout<< "Matemáticas:" << mat << endl;
        cout<< "Lenguaje: " << len << endl << endl;
    }
    else {
        cout<<"Hubo un problema en la digitación, escriba bien lo que se le pide" << endl << endl;
    }

    return 0;
}
