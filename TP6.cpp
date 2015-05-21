#include <iostream>

using namespace std;

int getNumeroMayor(int param, int ingreso);

int main(){
    int m = 0;
    int n;
    char opcion;

    while(opcion != 'N'){

        cout << "Ingrese un numero natural para evaluar o un numero no natural para cortar el proceso: " << endl;
        cin >> n;

        if (n<=0){
            cout << "El numero ingresado no es natural, desea ingresar otro numero? (S/N)" << endl;
           cin >> opcion;
        } else {
            m = getNumeroMayor(m,n);
        }
    }

    cout << "El mayor numero ingresado es: " << m << endl << "Hasta luego!";

    return 0;
}

int getNumeroMayor(int param, int ingreso){
    if (ingreso > param){
        param = ingreso;
    }
    return param;
}
