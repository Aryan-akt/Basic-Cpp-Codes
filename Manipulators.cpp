// setw is included in iomanip.
// setw is used to set the width of a variable.
// setw(4) indicates that the variable will occupy a width space of 4



#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int l = 1, m = 12, n = 123, o = 1234;
    
    cout << "The value of l without setw is " << l << endl;                 // output = 1
    cout << "The value of m without setw is " << m << endl;                 // output = 12
    cout << "The value of n without setw is " << n << endl;                 // output = 123
    cout << "The value of o without setw is " << o << endl;                 // output = 1234

    cout << "\nThe value of l with setw is " << setw(4) << l << endl;       // output =    1
    cout << "The value of m with setw is " << setw(4) << m << endl;         // output =   12
    cout << "The value of n with setw is " << setw(4) << n << endl;         // output =  123
    cout << "The value of o with setw is " << setw(4) << o << endl;         // output = 1234

    return 0;
}