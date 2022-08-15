// CLASIFICADOR DE EDADES
#include <cmath>
#include <iostream>
#include <cctype>
using namespace std;


int main() {
    char id;
    string clas;
    
    while (true){   
        cin>>id;
        id=toupper(id);
        if (id=='0') break;
        switch(id){
            case 'I': clas="INFANCIA"; break;
            case 'P': clas="PARVULO"; break;
            case 'A': clas="ADOLECENCIA"; break;
            case 'J': clas="JUVENTUD"; break;
            case 'D': clas="ADULTEZ"; break;
            case 'M': clas="ADULTO MAYOR"; break;
        }
        cout<<clas<<endl;
    }
    
    return 0;
}