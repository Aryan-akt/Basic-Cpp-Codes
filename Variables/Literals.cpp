//Literals are fixed values written directly into the source code that the program cannot modify.

#include <iostream>
using namespace std;

int main() {

    float x = 26.4f;
    long double y = 26.4l;
    
    cout << "The memory size in bytes of 26.4 is: " << sizeof(26.4) << endl;      // Gives output as 8
    cout << "The memory size in bytes of 26.4f is: " << sizeof(26.4f) << endl;    // Gives output as 4
    cout << "The memory size in bytes of 26.4F is: " << sizeof(26.4F) << endl;    // Gives output as 4
    cout << "The memory size in bytes of 26.4l is: " << sizeof(26.4l) << endl;    // Gives output as 12
    cout << "The memory size in bytes of 26.4L is: " << sizeof(26.4L) << endl;    // Gives output as 12

    // f/F and l/L indicate float and long double respectively.

    return 0;
}