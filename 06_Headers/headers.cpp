#include "headers.h"
#include <string>

int main() {
    printl("hello word from header");
    string total = to_string(sum(10, 15)); // to_string castea un int a string
    printl("La suma es: " + total);
    return 0;
}

