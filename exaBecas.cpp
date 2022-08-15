#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* En la Institución Universitaria Salazar y Herrera (IUSH) se tomó la decisión de seleccionar estudiante del programa de Sistemas para entregarle una beca por tener un desempeño destacado en el semestre actual. Para seleccionarlo se tiene una lista con el código, el nombre y la nota promedio de los mejores estudiantes de cada semestre.
Tu tarea es ayudar a la IUSH a encontrar el código y el nombre de ese estudiante que será beneficido con esa beca. La nota promedio de los candidatos debe ser superio a 4.0; en caso de que ninguno de los cantidatos supere este nota se deben imprimir "Beca aplazada para el otro semestre".
Nota: el promedio de notas de cada aspirante serán todas diferentes, por lo tanto no se dará el caso de que 2 estudiantes sean becados.

Se debe leer en la primera línea una variable entera X que corresponde al número total de candidatos.
La segunda línea consta de tres varibles C, N y P que corresponden a los códigos, nombres y promedio de notas de los X cantidatos.

Se debe imprimir, separados por un espacio en blanco, el código y el nombre del estudiante que será becada en el semestre actual en caso de que exista un estudiante con nota superior a 4.0; en otro caso imprimir "Beca aplazada para el otro semestre".
 */

int main() {
    int X, C, CodGan;
    string N, Gan;
    float P, MayP=4.0;

    cin>>X;
    for (int i=0; i<X; i++){
        cin>>C>>N>>P;

        if (P>MayP){
            MayP=P;
            Gan=N;
            CodGan=C;
        }
        
    }
    if(MayP>4.0){
        cout<<CodGan<<" "<<Gan<<endl;
    }
    else{
        cout<<"Beca aplazada para el otro semestre"<<endl;
    }

    return 0;
}
