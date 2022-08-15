// IMPUESTOS VEHÍCULARES

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nom;
    float sal;

    while (true){
        float valPag;
        cin>>nom;
        if (nom=="*"){
            break;
        }
        cin>>sal;

        if (sal>=500001 && sal<=1000000){
            cout<<sal*0.08<<endl;
        }
        else if (sal>=1000001 && sal<=1800000){
            cout<<sal*0.1<<endl;
        }
        else if (sal>=1800001 && sal<=2500000){
            cout<<sal*0.15<<endl;
        }
        else if (sal>2500000){
            cout<<sal*0.2<<endl;
        }
        else if (sal>=1 && sal<=500000){
            cout<<"EXCENTO"<<endl;
        }
    }

    return 0;
}
