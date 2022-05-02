#include <iostream>
using namespace std;
/*Hacer un programa para que el usuario ingrese un número positivo
y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario.*/

int main(){
    int n1,x;

    cout << "Ingrese un numero";
    cin >> n1;

    for(x=1; x<n1; x++){
        cout << x;
    }


    return 0;
}
