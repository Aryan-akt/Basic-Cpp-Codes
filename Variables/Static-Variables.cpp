// Static Variables are used inside a fuction.
// They are used when the value of a variable is to be altered every time the fucntion is called.
// Static variables do not work with inline functions.

#include <iostream>
using namespace std;

int product(int a, int b) {
    static int c = 0;           // This line is only executed once, and ignored thereafter.
    c = c + 1;
    return a * b + c;
}

int main() {

    int a = 1, b = 2;

    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;
    cout << product(a, b) << endl;

    return 0;
}