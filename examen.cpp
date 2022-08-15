#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const double PI= 3.141592653589;
const double e= 2.71828182845904;

int main() {
  cout.setf(ios::fixed);
  srand(time(NULL));

  int a, b, c;
  double x, volEsf, volCub, volTot, lad, r, w, z;

  a= 1+rand()%3;
  b= -50+rand()%101;
  c= rand()%6;

  cout<< endl << "Ingrese la longitud del radio de la esfera: ";
  cin>> r;
  cout<< endl << "Ingrese la longitud del lado del cubo: ";
  cin>> lad;

  //cálculo de x
  x= (sqrt(pow(e,3)) + cbrt(2*c) - pow((c+1)*5555.3-b,1/4.0)) / (4.5*a*b+1);

  //cálculo de w
  w= x*2.50;

  //cálculo de z
  z= x+w;

  //cálculo volumen esfera
  volEsf= 4/3.0*PI*pow(r,3);

  //cálculo volumen cubo
  volCub= pow(lad,3);

  //volumen figura
  volTot= volEsf + volCub;

  cout<< endl << endl << "Cálculos" << endl;

  cout.precision(0);
  cout<< endl << "a: " << a << endl;
  cout<< "b: " << b << endl;
  cout<< "c: " << c << endl;

  cout.precision(11);
  cout<< endl << "e: " << e << endl;
  cout<< "PI: " << PI << endl;

  cout.precision(3);
  cout<< endl << "x: " << x << endl;
  cout<< "w: " << w << endl;
  cout<< "z: " << z << endl;

  cout<< endl << "Volumen esfera: " << volEsf << endl;  
  cout<< "Volumen cubo: " << volCub << endl;  
  cout<< "Volumen total de la figura: " << volTot << endl << endl;  

  return 0;
}