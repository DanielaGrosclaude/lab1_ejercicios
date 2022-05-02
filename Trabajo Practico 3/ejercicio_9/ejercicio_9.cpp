#include <iostream>
using namespace std;
/*Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos.*/
int main(void)
{

    int i,n1,maxneg, minpos;
    bool numpos=false;
    bool numneg=false;

    cout<< " Ingrese la cantidad de 10 numeros: "<<endl;
    cout<<"--------------------"<<endl;
    for (i = 0; i < 10; i++)
    {
        cin >> n1;
        cout<<"--------------------"<<endl;
        if(n1>0 && numpos==false)
        {
            minpos=n1;
            numpos=true;
        }
        else if(n1>0 && numpos==true && n1<minpos)
        {
            minpos=n1;
        }
        if(n1<0 && numneg==false)
        {
            maxneg=n1;
            numneg=true;
        }
        else if(n1<0 && numneg==true && n1>maxneg )
        {
            maxneg=n1;
        }


    }
    cout<<"--------------------"<<endl;
    cout << "El maximo negativo es:  "<<maxneg<< endl;

    cout<<"--------------------"<<endl;
    cout << "El minimo positivo es:  "<<minpos<< endl;




    return 0;
}
