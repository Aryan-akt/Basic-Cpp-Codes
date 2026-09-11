// The condition is checked before the execution of loop.

// Syntax for While Loop:

// while (condition) {
//       loop code << endl;
// }

#include <iostream>
using namespace std;

int main() {

// Using while loop to write the table of 9.
    int i = 9;
    while (i <= 90) {
        cout << i << endl;
        i+= 9;
    }

    return 0;
}