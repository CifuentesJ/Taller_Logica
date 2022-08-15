#include <iostream>
using namespace std;

int main(){
    int numExp, edadMeses, contA=0, contP=0, contMa=0,contAr=0, contMi=0, contGeneral=0,pat, acumPat=0, edadMen=999999,sumPatAvYMa=0,sumPatAr=0;
    string cat, catEdMen,sal,sal2,catEstMay;
    char i;
    float peso, estatCm, acumAos=0, acumPesos=0, acumEdad=0,acumP4aos=0, estatMay=1;
    bool band1=false;

    cout<<"Ingrese el número de experimentos: ";
    cin>>numExp;

    for (int i=1; i<=numExp; i++){
        cout<<"Ingrese la categoría: ";
        cin>>cat;
        cout<<"Ingrese el peso: ";
        cin>>peso;
        cout<<"Ingrese la edad: ";
        cin>>edadMeses;
        cout<<"Ingrese la altura: ";
        cin>>estatCm;

        if(cat=="PE"){
            cout<<"Animales: Carpa, dorada, atún o salmón\nNúmero de patas: 0"<<endl;
            if((peso>=100 && peso<=300) && estatCm<15 && ((edadMeses/12)>=1 && (edadMeses/12)<=2)){
                band1=true;
            }
            pat=0;
            contP++;
        }
        else if(cat=="AV"){
            cout<<"Animales: Canario, loro, guacamaya o tucán\nNúmero de patas: 2"<<endl;

            pat=2;
            sumPatAvYMa=sumPatAvYMa+pat;
            acumAos=acumAos+edadMeses;
            contA++;
        }
        else if(cat=="MA"){
            cout<<"Animales: Vacas, ovejas, gatos o Conejos\nNúmero de patas: 4"<<endl;

            pat=4;
            sumPatAvYMa=sumPatAvYMa+pat;
            acumAos=acumAos+edadMeses;
            contMa++;
        }
        else if(cat=="AR"){
            cout<<"Animales: Tarántulas, escorpión, viuda negra o araña segadora\nNúmero de patas: 8"<<endl;
            
            acumP4aos=acumP4aos+peso;
            pat=8;
            sumPatAr=sumPatAr+pat;
            acumAos=acumAos+edadMeses;
            contAr++;
        }
        else if(cat=="MI"){
            cout<<"Animales: Ciempiés, milpiés, paurópodos o sínfilos\nNúmero de patas: 100"<<endl;

            acumP4aos=acumP4aos+peso;
            pat=100;
            contMi++;
        }


        if(edadMeses<edadMen){
            edadMen=edadMeses;
            catEdMen=cat;
        }
        if(estatCm>estatMay){
            estatMay=estatCm;
            catEstMay=cat;
        }


        acumEdad=acumEdad+edadMeses;
        acumPesos=acumPesos+peso;
        acumPat=acumPat+pat;
        contGeneral++;
    } 

    cout<<"\nPeces: "<<contP<<endl;
    cout<<"Promedio peces: "<<(float)contP/contGeneral*100<<"%"<<endl;
    cout<<"Aves: "<<contA<<endl;
    cout<<"Promedio aves: "<<(float)contA/contGeneral*100<<"%"<<endl;
    cout<<"Mamíferos: "<<contMa<<endl;
    cout<<"Promedio mamíferos: "<<(float)contMa/contGeneral*100<<"%"<<endl;
    cout<<"Arácnidos: "<<contAr<<endl;
    cout<<"Promedio arácnidos: "<<(float)contAr/contGeneral*100<<"%"<<endl;
    cout<<"Miriápodos: "<<contMi<<endl;
    cout<<"Promedio Miriápodos: "<<(float)contMi/contGeneral*100<<"%"<<endl;
    
    cout<<"Promedio 4: "<<(float)(acumAos/12)/(contA+contMa+contAr)<<endl;

    cout<<"Suma patas: "<<acumPat<<endl;
    cout<<"Suma pesos: "<<acumPesos<<endl;
    cout<<"Suma edades: "<<acumEdad<<endl;

    cout<<"Gramos: "<<acumP4aos<<endl;
    cout<<"Kilogramos: "<<(float)acumP4aos/1000<<endl;

    if(catEdMen=="PE"){sal="PECES";}
    else if(catEdMen=="AV"){sal="AVES";}
    else if(catEdMen=="MA"){sal="MAMÍFEROS";}
    else if(catEdMen=="AR"){sal="ARÁCNIDOS";}
    else if(catEdMen=="MI"){sal="MIRIÁPODOS";}
    cout<<"Edad menor: "<<edadMen<<" categoría: "<<sal<<endl;

    if(catEstMay=="PE"){sal2="PECES";}
    else if(catEstMay=="AV"){sal2="AVES";}
    else if(catEstMay=="MA"){sal2="MAMÍFEROS";}
    else if(catEstMay=="AR"){sal2="ARÁCNIDOS";}
    else if(catEstMay=="MI"){sal2="MIRIÁPODOS";}
    cout<<"Edad menor: "<<estatMay<<" categoría: "<<sal2<<endl;

    if(band1==true){
        cout<<"Sí existe animal sin patas, con peso entre 100 y 300 gramos y estatura inferior 15 centímetros con edad entre 1 y 2 años"<<endl;
    }
    else{
        cout<<"No existe animal sin patas, con peso entre 100 y 300 gramos y estatura inferior 15 centímetros con edad entre 1 y 2 años"<<endl;
    }

    if(sumPatAr>sumPatAvYMa){
        cout<<"Mayor suma de patas de arácnidos que mamíferos y aves"<<endl;
    }
    else{
        cout<<"No es mayor la suma de patas de arácnidos que mamíferos y aves"<<endl;
    }

    return 0;
}