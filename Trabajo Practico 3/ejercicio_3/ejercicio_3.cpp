#include <iostream>
using namespace std;
/*Hacer un programa para que el usuario ingrese un n�mero positivo
y que luego se muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.*/

int main(){
    int n1,x;

    cout << "Ingrese un numero";
    cin >> n1;

    for(x=1; x<n1; x++){
        cout << x;
    }


    return 0;
}
