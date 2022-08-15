/* Hacer el mismo ejercicio anterior, pero asignando números a cada uno de los signos zodiacales: 1-Aries, 2-Leo, 3-Sagitario, y así sucesivamente. */

#include <iostream>
using namespace std;

int main(){
    int signo;

    cout<< "\nIngrese el número de acuerdo a su signo zodiacal: ";
    cin>> signo;

    switch (signo){
        case 1:
            cout<<"Aries --> Elemento: fuego || Animal: dragón";
            break;
        case 2:
            cout<<"Sagitario --> Elemento: fuego || Animal: rata";
            break;
        case 3: 
            cout<<"Leo --> Elemento: fuego || Animal: mono";
            break;
        case 4:
            cout<<"Tauro --> Elemento: tierra || Animal: serpiente";
            break;
        case 5:
            cout<<"Virgo -->Elemento: tierra || Animal: gallo";
            break;
        case 6:
            cout<<"Capricornio --> Elemento: tierra || Animal: buey";
            break;
        case 7:
            cout<<"Géminis --> Elemento: aire || Animal: caballo";
            break;
        case 8:
            cout<<"Libra --> Elemento: aire || Animal: perro";
            break;
        case 9:
            cout<<"Acuario --> Elemento: aire || Animal: tigre";
            break;
        case 10: 
            cout<<"Cáncer --> Elemento: agua || Animal: cabra";
            break;  
        case 11: 
            cout<<"Escorpio --> Elemento: agua || Animal: cerdo";
            break; 
        case 12: 
            cout<<"Piscis --> Elemento: agua || Animal: conejo";
            break; 
        default:
            cout<<"Hubo un error.";
            break;
    }
    return 0;
}