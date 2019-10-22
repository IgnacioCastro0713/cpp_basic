#include <iostream>

using namespace std;

// funcion normal que no retorna nada
void myFunction() {
    cout << "I just got executed!" << endl;
}

// funcion con parametros (pueden ser de cualquier tipo) las funiciones pueden retornar cualquier tipo de dato
int myFunctionWithParams(int param1, int param2) {
    return param1+param2;
}

int sumTwoNumbers(int n1, int n2) {
    return n1+n2;
}

int main() {
    myFunction(); // usando mi funcion
    cout << "El resultado es: "<< myFunctionWithParams(1, 2);
    cout << "La suma es: "<< sumTwoNumbers(10, 20);
    return 0;
}

