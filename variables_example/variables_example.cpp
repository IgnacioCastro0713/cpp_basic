#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int isInt = 1;
    float isFloat = 1.0;
    char isChar = 'c';
    bool isBool = true || false;

    cout << "Types data variables:" << endl;
    cout << typeid(isInt).name() << " = entero" << endl;
    cout << typeid(isFloat).name() << " = float" << endl;
    cout << typeid(isChar).name() << " = char" << endl;
    cout << typeid(isBool).name() << " = boolean" << endl;
    return 0;
}