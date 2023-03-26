#include <iostream>
using namespace std;
int main() {
int opc2;
cout << "-------------------------------------------------------------------------" <<endl;
cout << endl;
cout << "Elija una de las siguientes opciones para ejecutar" << endl
   << endl
   << "1. Esta opcion le permite saber si la edad ingresada es de un mayor de edad o de un infante." << endl
        << endl
   << "2. Esta opcion le permite cual es el numero mayor entre dos cantidades seleccionadas. " << endl
        << endl
   << "3. Esta opcion le permite saber si un numero es par o impar."<< endl
        << endl
        << "4. Esta opcion le permite calcular el factorial de un numero ingresado."<< endl
        << endl
        << "5. Esta opcion le permite ingresar un numero mayor que 10 y menor que 30 para saber cuales son sus numeros pares."<< endl
        << endl
        << "6. Esta opcion le permite saber que dia es ingresando un numero entre 1 y 5."<< endl
        << endl
        << "Ingrese su eleccion por favor";
cin >> opc2;
    switch (opc2) {
    case 1:{
   int age;
    cout<<"Ingresa un numero para saber si eres mayor de edad" << endl;
    cin >> age;
    if (age <18){
        cout << endl;
        cout <<"eres menor de edad";
    } else{
        cout<< "eres mayor de edad";
    }}
    case 2: {
    int nm1,nm2;
    int total;

    cout << "Para saber que numero es mayor entre dos cantidades" << endl;
    cout << "digita la primer cantidad" << endl;
    cin >> nm1;
    cout << "digita la segunda cantidad"<< endl;
    cin >> nm2;
    total= nm1-nm2;
    if (total <1){
        cout<< " El numero " << nm2 << " es mayor que " << nm1 << endl;
    } else{
        cout << " El numero " << nm1 << " es mayor que " << nm2 << endl;
    }}
    case 3: {
    int cantidad;
    cout << "Si deseas saber si un numero es par o impar ingresa un numero";
    cin >> cantidad;
    if (cantidad%2 ==0){
        cout << endl;
        cout<< cantidad << " Es un numero par ";
    }
    else {
        cout << endl;
        cout << cantidad << " es un numero impar ";
    } }
    case 4: {
        cout << "ingresa un numero para calcular factorial" << endl;
        int numero = 1;
        int vuel;
        double cant1 = 0;
        int resultado = 1;
        cin >> vuel;
        while (numero <= vuel) {
            resultado = resultado * numero;
            numero++;
            cout << cant1 << "x";
            cant1 = cant1 + 1;
        }
        cout << endl;
        cout << vuel << "=" << resultado;
    }
    case 5:{
   int nmr;
   cout << "Coloca un numero que sea mayor a 10 y menor que 30"; cin >> nmr;
    int nmp ;
    int nmp2;
    cout << endl;
    cout << "Todos los numeros pares que hay desde 1 hasta " << nmr << " son:" <<endl;
    cout << endl;
    nmp2= nmr/2;
    for (int i = 1; i <= nmp2; i++) {
        nmp = nmp+2;
        cout << nmp << endl ;
        cout << endl;
    }}
    case 6:{
  int opc;
  cout << "Para saber un dia de la semana ingrese un numero del 1 al 5";
  cin >> opc;
    switch (opc) {
        case 1:{
            cout << endl;
            cout <<"Hoy es dia Lunes" << endl;
            break;
        }
        case 2:{
            cout << endl;
            cout <<"Hoy es dia Martes" << endl;
            break;
        }
        case 3:{
            cout << endl;
            cout <<"Hoy es dia Miercoles" << endl;
            break;
        }
        case 4:{
            cout << endl;
            cout <<"Hoy es dia Jueves" << endl;
            break;
        }
        case 5:{
            cout << endl;
            cout <<"Hoy es dia Viernes";
            break;
        }
            }
                }
                     }
                        }

