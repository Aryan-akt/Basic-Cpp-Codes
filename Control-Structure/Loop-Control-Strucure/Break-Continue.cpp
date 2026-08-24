#include <iostream>
using namespace std;

int main() {
    
    cout << "You cannot vote if your age is: " << endl; 

// 'Break' is used in a loop when the loop has to be stopped during a specific condition.
// 'Break' stops the loop and runs the next code.
    for (int i = 1; true; i++) {
       
        cout << i << ", ";

        if (i == 16){
            break;
        }

    }

    cout << 17 << endl << endl;

// 'Continue' is used when the loop has to skip a specific case.
// 'Continue' skips all content below it and continues the next loop.
    cout << "The first four prime numbers are: " << endl;

    for (int i = 2; i < 8; i++) {
        
        if (i == 4, i == 6) {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}