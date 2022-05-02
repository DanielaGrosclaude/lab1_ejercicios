/*Hacer un programa para ingresar una lista de 8 números
y luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
*/

#include <iostream>
using namespace std;


int main (void) {
    int n, i;
    bool band1 =0;
    bool band2 =0;
    bool ordenado = true;
    bool desordenado= false;

    for (i=0; i<8; i++){
}
        cout << "Ingrese un numero: "<< endl;
        cin >> n;


        if (n >= n && band1 == 0 ){
            ordenado = false;
            band1 = 1;


        }else {
            desordenado =false;
            band2 = 1;
        }
    cout << "El conjunto esta ordenado "<< ordenado;
    cout << "El conjunto esta desordenado"<< desordenado;




    return 0;
}
