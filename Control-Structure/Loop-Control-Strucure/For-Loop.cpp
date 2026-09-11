// Syntax for For Loop:

// for (initialization; condition; updation) {
//     loop code << endl;
// }

#include <iostream>
using namespace std;

int main() {

// Using for loop to print all numbers from 0 to 20.

    for (int i = 0; i <= 20; i++) {
        cout << i << endl;
    }

    cout << endl;

// Using for loop to write the table of 7.
    for (int i = 7; i <= 70; i+=7) {
        cout << i << endl;
    }

    return 0;
}