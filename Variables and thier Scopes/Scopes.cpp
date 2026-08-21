// Each variable has its scope.

#include <iostream>
using namespace std;

int glo = 4;
int c = 12;
// These are global variables.

void value() {
cout << c;
}

int main() {

    int loc = 8;
    int c = 24;
    // These are a local variables.

    cout << glo << endl;
    cout << loc << endl;
    cout << c << endl;      // This will give 24 as an output since it gives precedence to local variable over global variable
    
    value();                // This will give 12 as output since it gives precedence to global variable over local variable.

    return 0;
}