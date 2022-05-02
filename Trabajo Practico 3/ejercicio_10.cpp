#include <iostream>
#include <stdio.h>
using namespace std;

/*Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.*/

int main()
{
    int n,i,impar1,impar2;
    bool band1=0,band2=0;


    for(i=7; i>0; i--)
{
        cout<<"ingrese un numero:";
        cin>>n;
            if(n%2!=0 && band1==0)
            {
            impar1=n;
            band1=1;
            }
                else if(n%2!=0 && band2==0){

                impar2=n;
                band2=1;
        }

}

    cout<<"el primer impar es:"<<impar1<<endl;
    cout<<"el segundo impar es:"<<impar2<<endl;

return 0;
}
