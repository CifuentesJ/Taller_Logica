/* Hacer un programa en C++ que lea el signo zodiacal de una persona e imprima el elemento y el animal al que corresponde, de acuerdo con la siguiente tabla: */

#include <iostream>
using namespace std;

int main(){
    string signo;

    cout<< "\nIngrese su signo zodiacal: ";
    cin>> signo;

    if (signo=="aries" || signo=="Aries"){
        cout<<"Elemento: fuego || Animal: dragón";
    }
    else if (signo=="Sagitario" || signo=="sagitario"){
        cout<<"Elemento: fuego || Animal: rata";
    }
    else if (signo=="Leo" || signo=="leo"){
        cout<<"Elemento: fuego || Animal: mono";
    }
    else if (signo=="Tauro" || signo=="tauro"){
        cout<<"Elemento: tierra || Animal: serpiente";
    }
    else if (signo=="Virgo" || signo=="virgo"){
        cout<<"Elemento: tierra || Animal: gallo";
    }
    else if (signo=="Capricornio" || signo=="capricornio"){
        cout<<"Elemento: tierra || Animal: buey";
    }
    else if (signo=="Geminis" || signo=="geminis" || signo=="Géminis" || signo=="géminis"){
        cout<<"Elemento: aire || Animal: caballo";
    }
    else if (signo=="Libra" || signo=="libra"){
        cout<<"Elemento: aire || Animal: perro";
    }
    else if (signo=="Libra" || signo=="libra"){
        cout<<"Elemento: aire || Animal: perro";
    }
    else if (signo=="Acuario" || signo=="acuario"){
        cout<<"Elemento: aire || Animal: tigre";
    }
    else if (signo=="Cancer" || signo=="cancer" || signo=="Cáncer" || signo=="cáncer"){
        cout<<"Elemento: agua || Animal: cabra";
    }
    else if (signo=="Escorpión" || signo=="escorpión" || signo=="Escorpion" || signo=="escorpion"){
        cout<<"Elemento: agua || Animal: cerdo";
    }
    else if (signo=="Piscis" || signo=="Piscis" ){
        cout<<"Elemento: agua || Animal: conejo";
    }
    else {
        cout<<"Hubo un error";
    }


    return 0;
}