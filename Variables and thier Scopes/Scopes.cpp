// Each variable has its scope.

#include <iostream>

using namespace std;

int glo = 4;
// This is a global variable.

int c = 12;

void value() {
cout << c << endl;
}

int main() {

    int loc = 8;
    // This is a local variable.

    int c = 24;
    cout << c << endl;
    // This will give 24 as an output since it gives precedence to local variable over global variable.

    value();
    // This will give 12 as output since it gives precedence to global variable over local variable.

    return 0;

}