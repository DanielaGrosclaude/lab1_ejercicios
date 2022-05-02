#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/




int main(){
    int sueldo, contador;
    int x;
    contador=1;

    for (x=1; x<=10; x++){
        cout << "Ingrese el sueldo del empleado "<< contador++ << endl;
        cin>> sueldo;

        if ( sueldo > sueldo ){
            cout << "El mayor sueldo es de. " << sueldo;
        }

    }



    return 0;
}
