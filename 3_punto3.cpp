/* En la ciudad de Medellín se realizará una competencia ciclística por los principales barrios de la ciudad y van a participar N número de ciclistas de todo el mundo. Debido a que el nombre bicicleta no es usado en todos los países se requiere de un programa en C++ al que se le ingrese el país de procedencia del ciclista y le imprima, por medio de la siguiente tabla, el nombre equivalente a bicicleta   */

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string pais;
    int N;
    cout<<"Ingrese el número de competidores: ";
    cin>>N;
    
    for (int i=1; i<=N; i++){
        cout<< "Ingrese el pais de procedencia: ";
        cin>>pais;

        if (pais=="Cuba"){
            cout<<"\nBicicleta = Chiva" << endl;
        }
        else if (pais=="Argentina"){
            cout<<"\nBicicleta = Bici" << endl;
        }
        else if (pais=="Chile"){
            cout<<"\nBicicleta = Bici o Chanca" << endl;
        }
    }
    return 0;
}