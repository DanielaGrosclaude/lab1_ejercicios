#include <iostream>
using namespace std;
/*Hacer un programa para que el usuario ingrese dos
 números y luego el programa muestre por pantalla los
 números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.*/

int main (){
    int n1, n2,x;

    cout << "Ingrese un numero"<<endl;
    cin>> n1;
    cout << "Ingrese otro numero"<<endl;
    cin >> n2;

    for(x=n1; x<n2; x++){

        cout << x;
    }
    return 0;
}
