#include<iostream>
using namespace std;

int main() {
    cout.precision(2);
    cout.setf(ios::fixed);
    //DECLARACIÓN DE VARIABLES DE LA ENTRADA
    string nom;
    char bebe, fum, cont;
    int anos;
    double sal;
    
    //DECLARACIÓN DE VARIABLES QUE SE CALCULAN
    int ct=0,cv=0,cm=0,ch=0,cTotEmp=0,acumAnosEm=0,cBebe=0,cNoBebe=0, cFT=0;
    int mayAn=1;
    double acumSalFT=0, menSal=5000000;
    bool band=false;   
    

    //CALCULAR VARIABLES CON ESTRUCTURAS REPETITIVAS

    while(true){
        cout << "INGRESE SU NOMBRE [EN MAYUSCULAS O JAIRO PARA SALIR]: ";
        cin >> nom;
        if (nom=="JAIRO") break;
        cout << "¿Usted bebe [S: Sí y N: No]?: ";
        cin >> bebe;
        bebe = toupper(bebe);
        cout << "¿Usted fuma [S: Sí y N: No]?: ";
        cin >> fum;
        fum = toupper(fum);
        cout << "¿Número de años de estar trabajando [entre 1 y 40]?: ";
        cin >> anos;
        cout << "¿Salario devengado [$200.000 y $5.000.000]?: ";
        cin >> sal;
        cout << "¿Tipo de contrato [T-Temporal V-Vinculado M-Medio tiempo y H-Honorarios]?: ";
        cin >> cont;
        cont = toupper(cont);

        //1.Contador empleados c/contrato
        switch(cont){
            case 'T': ct++; break;
            case 'V': cv++; break;
            case 'M': cm++; break;
            case 'H': ch++; break;
        }
        //2.Cantidad total de empleados
        cTotEmp++;

        //3.Total años que acumulan todos los empleados y el promedio de años en general.
        acumAnosEm+=anos;

        //4.Porcentaje de empleados vinculados que beben y porcentaje de los empleados vinculados que no beben.
        //5.Promedio de salario devengados de empleados que estén con contrato temporal que fume y no beba.
        switch(bebe){
            case 'S': cBebe++; break;
            case 'N': 
                cNoBebe++;
                if (cont=='T' && fum=='S'){
                    acumSalFT+=sal;
                    cFT++;
                }
                break;
        }

        /* 6.Si existe o no al menos un empleado de medio tiempo, con salario devengado entre $1.000.000 y $1.500.000, con una cantidad de años no superior a 5 años. */
        if(cont=='M' && (sal>=1000000 && sal<=1500000) && anos<5){
            band=true;
        }

        //7.Mayor valor número de años de estar trabajando
        if (anos>mayAn){
            mayAn=anos;
        }

        //8.Menor salario devengado.
        if (sal<menSal){
            menSal=sal;
        }

    }
    
    //IMPRIMIR EL REPORTE FINAL. NO OLVIDE QUE ESTE VA DESPUÉS DEL CICLO
    cout << "--> \nR E P O R T E   F I N A L " << endl;
    cout << "--> 1. Cantidad de empleados TEMPORALES  : " << ct << endl;
    cout << "--> 1. Cantidad de empleados VINCULADOS  : " << cv << endl;
    cout << "--> 1. Cantidad de empleados MEDIO TIEMPO:  " << cm << endl;
    cout << "--> 1. Cantidad de empleados HONORARIOS  : " << ch << endl;	
    cout << "--> 2. Cantidad total de empleados       : " << cTotEmp << endl;
    cout << "--> 3. Total años laborados de empleados :	" << acumAnosEm << endl;
    cout << "--> 3. Promedio de años laborados empleados     : " << (float)acumAnosEm/cTotEmp << endl;
    cout << "--> 4. Porcentaje empleados vinculados que beben    : " << (float)cBebe/cTotEmp*100 << "%" << endl;
    cout << "--> 4. Porcentaje empleados vinculados que no beben : " << (float)cNoBebe/cTotEmp*100 << "%" << endl;
    cout << "--> 5. Salario promedio de temporales que fuman y no beben: $" << acumSalFT/cFT << endl;	
    cout<<(band?"--> 6. Si existe ":"--> 6. No existe") << endl;
    cout << "--> 7. Mayor número de años de estar trabajando: " << mayAn << endl;
    cout << "--> 8. Menor salario devengado: " << menSal << endl;	
   
    return 0;
}
