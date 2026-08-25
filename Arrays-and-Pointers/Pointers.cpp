// A Pointer is a data type which holds the address of other data types.

#include <iostream>
using namespace std;

int main() {

    int a = 7;
    int* b = &a;        // & is an 'address of' Operator

    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The value at address stored in b is: " << *b << endl << endl;        // * is an 'value at' Dereference Operator

    int** c = &b ;       // Pointer to Pointer

    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address stored in c is: " << *c << endl;
    cout << "The value at the address stored at the address stored in c is: " << **c << endl;

    return 0;
}