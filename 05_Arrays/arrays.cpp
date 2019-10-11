#include <iostream>
#include <array>

using namespace std;

int main() {
    char arrayExample1[] = {'a', 'b', 'c'}; // Arreglo inicializado tipo char
    string arrayExample2[5]; // Arreglo tipo string sin inicializar con 5 espacios o tamaño de 5
    array<int, 6> arrayExample3{}; // otra manera de declarar un arreglo tipo int
    array<float, 3> arrayExample4{1.4, 1.5, 1.6}; // otra manera de declarar un arreglo tipo float

    int sizeArrayExample1 = (sizeof(arrayExample1) / sizeof(arrayExample1[0])); // calcular el tamaño del arrayExample1

    cout << "size of arrayExample1: " << sizeArrayExample1 << endl;
    cout << "size of arrayExample3: " << arrayExample3.size() << endl;

    // recorrer un arreglo con un for:
    for (int i = 0; i < arrayExample4.size(); i++) {
        cout << "La posision " << i << " contiene " << arrayExample4[i] << endl;
    }

    // recorrer un arreglo con un foreach hace lo mismo que el for normal:
    for (char x: arrayExample1) { // especificar el tipo dato del arreglo en la variable x
        cout << x << endl;
    }
}

