// "new" keyword is used to dynamically allocates value to a pointer.
// Whereas "delete" keyword is used to delete such dynamically allocated values.

#include <iostream>
using namespace std;

int main() {

    int *p = new int (50);
    float *q = new float(39.64);

    cout << "Dereferencing p gives output as " << *p << endl;
    cout << "Dereferencing q gives output as " << *q << endl;

    // float *a = new float[3];      // OR
    int *a = new int[3];
    a[0] = 20;
    a[1] = 40;
    *(a+2) = 60;      // Another way of allocating memory.
    
    cout << "The value of at first memory location of the array is " << a[0] << endl;
    cout << "The value of at second memory location of the array is " << a[1] << endl;
    cout << "The value of at third memory location of the array is " << a[2] << endl;
    
    delete[] a;       // This will delete the array "a".

    return 0;
}