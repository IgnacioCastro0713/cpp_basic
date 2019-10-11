#include <iostream>
#include "helpers.h"
#include <string>

using namespace std;

int main() {
    int a, b;
    int option;

    printl("Bienvenido, este programa realizara operaciones aritmeticas");
    printl("sobre 2 cantidades que escribas");
    printl("Escribe el primer numero: ");
    cin >> a;
    cout << "Escribe el segundo numero: ";
    cin >> b;

    printl("Indica el numero de la operación que desees realizar: ");
    printl("(1) Suma");
    printl("(2) Resta");
    printl("(3) Producto");
    printl("(4) Division Entera");
    printl("(5) Modulo");
    cin >> option;

    //Para realizar la operación solicitada utilizamos una estructura switch
    //Intencionalmente se ha omitido el uso de break;
    switch (option) {
        case 1:
            printl("La suma es: " + to_string(a + b));
            break;
        case 2:
            printl("La resta es: " + to_string(a - b));
            break;
        case 3:
            printl("El producto es: " + to_string(a * b));
            break;
        case 4:
            printl("La división es: " + to_string(a / b));
            break;
        case 5:
            printl("El modulo es: " + to_string(a % b));
            break;
        default:
            printl("Opcion no valida");
            break;
    } //Fin de switch

    printl("Gracias por utilizar este programa");

    return 0;
}
