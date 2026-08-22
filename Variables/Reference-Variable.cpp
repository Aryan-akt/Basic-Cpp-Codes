// Reference variables are used to give alternate name to a predefined variable.
// Once a reference is tied to a variable, it cannot be changed to point to another variable.

#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int& y = x; // 'y' is now a reference to 'x'

    cout << "The value of x is " << x << endl;
    cout << "The value of y is also " << y << endl;

    y = 20; // Modifying y updates x

    cout << "Changing the value of y also changes the value of x: " << x; // Outputs 20

    return 0;
}
