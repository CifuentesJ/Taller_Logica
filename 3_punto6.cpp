/* La edad de los perros oscilan entre 1 y 15 años aproximadamente. En un laboratorio se tiene una tabla con la equivalencia entre la edad de un perro y un ser humano. Se pide hacer un programa en C++ al cual se le ingrese la edad de varios perros y muestre su equivalente en años en humanos teniendo en cuenta lo siguiente */


#include <iostream>
using namespace std;

int main(){
    int edPerro;
    
    
    cout<<"Ingrese la edad del animal: ";
    cin>>edPerro;

    while (edPerro!=0){
        switch (edPerro){
            case 1: cout<<"1 año perro = 7 años humanos"<<endl; break;
            case 2: cout<<"2 años perro = 20 años humanos"<<endl; break;
            case 3: cout<<"3 años perro = 32 años humanos"<<endl; break;
            case 4: cout<<"4 años perro = 43 años humanos"<<endl; break;
            case 5: cout<<"5 años perro = 53 años humanos"<<endl; break;
            case 6: cout<<"6 años perro = 62 años humanos"<<endl; break;
            case 7: cout<<"7 años perro = 70 años humanos"<<endl; break;
            case 8: cout<<"8 años perro = 75 años humanos"<<endl; break;
            case 9: cout<<"9 años perro = 70 años humanos"<<endl; break;
            case 10: cout<<"1 años perro = 70 años humanos"<<endl; break;
            default: cout<<"+10 años perro = +80 años humano"<<endl;
        }
       
        cout<<"\n\nIngrese la edad del animal o 0 para salir: ";
        cin>>edPerro;
    }

    return 0;
}