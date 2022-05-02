#include <iostream>
using namespace std;
/*Hacer un programa para ingresar una lista de 10 números,
luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.*/

int main (){
    int x;
    int n;
    int contador, contador3;

    contador = 0;
    contador2 = 0;
    contador3 = 0;


    for (x=0; x<10; x++){
        cout << "Ingrese un numero: "<< endl;
        cin >> n;
        if (n > 0){
                contador++;

        }
        else if (n<0){
                contador2++;
                 }
        else {
             contador3++;

        }

    }
        cout << "Los numeros positivos son: " << contador << endl;
        cout << "Los numeros negativos son: " << contador2 << endl;
        cout << "Los numeros cero  son: " << contador3 << endl;
    return 0;
}
