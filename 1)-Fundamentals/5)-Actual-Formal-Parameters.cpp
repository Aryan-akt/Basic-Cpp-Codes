// Formal Parameters are just placeholders that are defined in a function or header.
// Actual Parameters are the real values passed into the function when it is called.

#include <iostream>
using namespace std;

int Remainder(int x, int y) {
    return x % y;
}
// Here x and y are Formal Parameters which will be taking value from the Actual Parameters a and b.

int main() {

    int a, b;
    // Here a and b are Actual Parameters.

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    cout << "The remainder when " << a << " is divided by " << b << " is: " << Remainder(a, b);

    return 0;
}