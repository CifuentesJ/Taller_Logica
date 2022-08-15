// NOTA DEFINITIVA

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double n1, n2, n3, n4, n5, prom;
    string res;
    cout.setf(ios::fixed);
    cout.precision(1);

    cin>>N;
    for (int i=1; i<=N; i++){
        cin>>n1;
        n1*=0.15;

        cin>>n2;
        n2*=0.25;

        cin>>n3;
        n3*=0.3;

        cin>>n4;
        n4*=0.1;

        cin>>n5;
        n5*=0.2;

        prom=n1+n2+n3+n4+n5;

        if (prom>=3){
            res="GANO ";
        }
        else{
            res="PERDIO ";
        }

        cout<<res<<prom<<endl;
    }
    return 0;
}