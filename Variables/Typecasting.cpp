// Typecasting is the process of converting a variable from one data type to another.

#include <iostream>
using namespace std;

int main() {

    int p = 36;
    float q = 14.67;
    
    cout << "The value of p is: " << p << endl;
    cout << "The value of q is: " << q << endl;
    cout << "The integer value of q is: " << int(q) << endl;     // 'int(q)' can also be written as '(int)q'

    int r = int(q);
    cout << "\nThe sum of p and q will be: " << p + q << endl;
    cout << "The sum of p and integer value of q will be: " << p + r;

    return 0;
}