// A Do While loop always runs atleast one time, even if the condition is false.
// This is because the codition is checked after the loop has run for the first time.

#include <iostream>
using namespace std;

int main() {

        int i = 6;
    do {
        cout << i << endl;
        i += 6;
    }
    while (i <= 60);

    return 0;
}