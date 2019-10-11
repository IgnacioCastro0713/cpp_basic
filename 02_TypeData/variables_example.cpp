#include <iostream>
#include <string>

using namespace std;

int main() {
    int isInt = 1;
    float isFloat = 1.0;
    char isChar = 'c';
    bool isBool = true || false;
    string isString;

    cout << "Types data variables:" << endl;
    cout << typeid(isInt).name() << " = int" << endl;
    cout << typeid(isFloat).name() << " = float" << endl;
    cout << typeid(isChar).name() << " = char" << endl;
    cout << typeid(isBool).name() << " = boolean" << endl;
    cout << typeid(isString).name() << " = string" << endl;
    return 0;
}