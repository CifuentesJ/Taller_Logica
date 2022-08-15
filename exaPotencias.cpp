#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Para este reto debes leer un número entero N que corresponde al número de líneas o filas que se van a visualizar de esas potencias mágicas.*/

int main() {
    int N;
    float contP=0;
    
    cin>>N;
    for(int i=1; i<=N; i++){
        cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl;
    }


    return 0;
}
