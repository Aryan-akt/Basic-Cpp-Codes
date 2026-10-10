// The "new" and "delete" keywords are used for dynamic memory management.
// "new" keyword is used to dynamically allocates value to a pointer.
// "delete" keyword is used to delete such dynamically allocated values.

#include <iostream>
using namespace std;

int main() {

    int *p = new int (50);
    float *q = new float(39.64);

    cout << "Dereferencing p gives output as " << *p << endl;
    cout << "Dereferencing q gives output as " << *q << endl;

    int size = 3;
    // float *a = new float[size];      // OR
    int *a = new int[size];
    a[0] = 20;
    a[1] = 40;
    *(a+2) = 60;      // Another way of allocating memory.
    
    cout << "The value at the first memory location of the array is " << a[0] << endl;
    cout << "The value at the second memory location of the array is " << a[1] << endl;
    cout << "The value at the third memory location of the array is " << a[2] << endl;
    
    delete[] a;       // This will delete the array "a".

    return 0;
}