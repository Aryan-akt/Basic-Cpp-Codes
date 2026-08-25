// New Address = Current Address + i * Size of Data Type

#include <iostream>
using namespace std;

int main() {

    int Marks[] = {65,84,35,85,54};
    int* p = Marks;     // p now points to the first element in the Array.

        cout << "Marks of student number 1 is " << *p << endl;
        cout << "Marks of student number 2 is " << *(p + 1) << endl;
        cout << "Marks of student number 3 is " << *(p + 2) << endl;
        cout << "Marks of student number 4 is " << *(p + 3) << endl;
        cout << "Marks of student number 5 is " << *(p + 4) << endl << endl;

        cout << *p++ << endl;       // Now p points to the second element in the Array.
        cout << *++p << endl;       // Now p points to the third element in the Array.

    return 0;
}