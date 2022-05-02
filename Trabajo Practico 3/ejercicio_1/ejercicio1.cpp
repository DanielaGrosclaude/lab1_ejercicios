#include <iostream>
using namespace std;

/*Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.*/


int main(){
    int x;

    for(x=0; x<20; x++){
        x++;
        cout<<x++;
    }
    return 0;
}
