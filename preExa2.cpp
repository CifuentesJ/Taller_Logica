// NÚMERO DE PULSACIONES DESPUÉS DE EJERCICIO

#include <cmath>
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;


int main() {
    int N, edad; //N=personas 
    char sex;
    float puls, seg;
    cout.setf(ios::fixed);
    
    cin>> N;
    for (int i=0; i<N; i++){
        cin>>seg;
        cin>>edad;
        cin>>sex;
        sex=toupper(sex);
        
        if (sex=='M'){
            puls=(210-edad)/seg;
        }
        else if (sex=='F'){
            puls=(220-edad)/seg;
        }
        cout.precision(1);
        cout<<puls<<endl;
        
    }
    
    
    
    return 0;
}