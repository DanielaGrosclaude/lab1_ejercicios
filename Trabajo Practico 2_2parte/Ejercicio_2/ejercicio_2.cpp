#include <iostream>
using namespace std;

/*Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego, calcular e informar:
--La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
--El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/


int main () {
    int edad1,edad2, edad3, edad4, edad5, edad, edadalt;
    float altura1, altura2, altura3, altura4, altura5, altura;
    char persona;
    int prom_alt, n;
    int cant = 0;

    //Datos persona 1
    cout << "Persona 1."<< endl;
    cout << "**********" << endl;
    cout << "Edad: "<< endl;
    cin >> edad1;
    cout << "Altura: " << endl;
    cin >> altura1;

    cout << "Persona 2."<< endl;
    cout << "**********"<< endl;
    cout << "Edad: "<< endl;
    cin >> edad2;
    cout << "Altura: " << endl;
    cin >> altura2;

    cout << "Persona 3."<< endl;
    cout << "**********"<<endl;
    cout << "Edad: "<< endl;
    cin >> edad3;
    cout << "Altura: " << endl;
    cin >> altura3;

    cout << "Persona 4."<< endl;
    cout << "**********"<< endl;
    cout << "Edad: "<< endl;
    cin >> edad4;
    cout << "Altura: " << endl;
    cin >> altura4;

    cout << "Persona 5."<<endl;
    cout << "**********"<<endl;
    cout << "Edad: "<< endl;
    cin >> edad5;
    cout << "Altura: " << endl;
    cin >> altura5;


    cout << "A)" << endl;

    if (altura1 > 1.8){
        cout << "La persona 1 es mas altx que la altura 1.8"<< endl;
    }
     if (altura2 > 1.8){
        cout << "La persona 2 es mas altx que la altura 1.8"<< endl;
    }
     if (altura3 > 1.8){
        cout << "La persona 3 es mas altx que la altura 1.8"<< endl;
    }
     if (altura4 > 1.8){
        cout << "La persona 4 es mas altx que la altura 1.8"<< endl;
    }
     if (altura5> 1.8){
        cout << "La persona 5 es mas altx que la altura 1.8"<< endl;
    }
    cout << "B)" << endl;

    edadalt = 0;

    if (edad1 > 30 && altura1 > 1.80) edadalt++;
    if (edad2 > 30 && altura2 > 1.80) edadalt++;
    if (edad3 > 30 && altura3 > 1.80) edadalt++;
    if (edad4 > 30 && altura4 > 1.80) edadalt++;
    if (edad5 > 30 && altura5 > 1.80) edadalt++;

    cout << "Las personas de +30 anios con altura mayor a 1.80 son " << edadalt <<  endl;

    cout << "C)" << endl;

    if (edad1 == 20 || edad1 == 30 || edad1 == 40)
    {
        cant = cant++;
    }


    cout << "La cantidad de personas con edad 20, 30 o 40 años es de  " <<cant;





    return 0;
}
