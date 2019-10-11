#include <iostream>

using namespace std;


class MyClass {       // The class
public:               // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

private:                  // Access specifier (you can't access it)
    int privateInt;
    string privateString;

protected:               // Access specifier (you can't access it)
    int protectedInt;
    float protectedFloat;
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";  // \n = endl
    cout << myObj.myString;
    return 0;
}

