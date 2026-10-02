// A constant is a variable whose assigned value remains fixed and unchangeable (read-only) throughout the
// entire execution of a program.

#include <iostream>
using namespace std;

int main() {

    int n = 5;
    cout << "The value of n was " << n << endl;
    n = 7;
    cout << "The value of n is " << n << endl;

    const float pi = 3.14;
    cout << "The value of pi is and always will be " << pi << endl;
    // pi = 4.89;    // This would show an error as pi is an unmodifiable constant

    return 0;
}