/* Realizar un programa en C++ que permita generar dos números aleatorios enteros positivos (que estén en el rango 1 y 999). Mostrar las operaciones básicas con esos dos números: suma, resta, multiplicación, división, cuadrado, cubo, raíz cuadrada y raíz cúbica. Las últimas 4 operaciones se deben realizar por cada número. Imprimir los números generados. */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { 
    srand(time(NULL));
    float n1, n2, sum, res, res2, mult, div, div2, cuad1, cuad2, cub1, cub2, raiz1, raiz2, raizcu1, raizcu2;

    n1= 1+rand()%999;
    n2= 1+rand()%999;

    sum= n1+n2;
    res= n1-n2;
    res2= n2-n1;
    mult= n1*n2;
    div= n1/n2;
    div2= n2/n1;
    cuad1= pow(n1,2);
    cuad2= pow(n2,2);
    cub1= pow(n1,3);
    cub2= pow(n2,3);
    raiz1= sqrt(n1);
    raiz2= sqrt(n2);
    raizcu1= cbrt(n1);
    raizcu2= cbrt(n2);

    cout<< "\n Número aleatorio 1: "<< n1 <<endl;
    cout<< "Número aleatorio 2: "<< n2 <<endl;

    cout<< "\n Suma: " << sum <<endl;
    cout<< "\n Resta del n1 con el n2: " << res <<endl;
    cout<< "\n Resta del n2 con el n1: " << res2 <<endl;
    cout<< "\n Multiplicación: " << mult <<endl;
    cout<< "\n División del n1 con el n2: " << div <<endl;
    cout<< "\n División del n2 con el n1: " << div2 <<endl;
    cout<< "\n Número 1: " <<endl;
    cout<< "Cuadrado: " << cuad1 <<endl;
    cout<< "Cubo: " << cub1 <<endl;
    cout<< "Raiz cuadrada: " << raiz1 <<endl;
    cout<< "Raiz cubica: " << raizcu1 <<endl;    
    cout<< "\n Número 2: " <<endl;
    cout<< "Cuadrado: " << cuad2 <<endl;
    cout<< "Cubo: " << cub2 <<endl;
    cout<< "Raiz cuadrada: " << raiz2 <<endl;
    cout<< "Raiz cubica: " << raizcu2 <<endl;    

 return 0;
}