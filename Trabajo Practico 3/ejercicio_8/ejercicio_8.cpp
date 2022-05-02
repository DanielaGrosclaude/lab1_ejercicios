#include <iostream>
using namespace std;
/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo*/

int main (){
    int i, n, max, sueldo;
    for (i=1; i<=10; i++){
        cout << "Ingrese numero de empleado: "<< endl;
        cin >>n;
        cout << "Ingrese sueldo: "<< endl;
        cin >> sueldo;
        if (i==1){
            max = sueldo;
        }
        else{
            if ( sueldo > max){
                max= sueldo;
            }
        }
    }

    cout << "El maximo es: "<< max;
    return 0;

}
