// A Function is a block of code that performs a specific task when needed.

#include <iostream>
using namespace std;

int sum(int a, int b) {             // This Function can be used when sum of two integers is required.
    int c = a + b;
    return c;                       // This Function will return c as its output.
}

int difference(int a, int b) {      // This Function can be used when difference of two integers is required.
    return a - b;                   // Output of function can also be written like this.
}

void gm() {
    cout << "\nGood Morning, Ladies and Gentlemen." << endl;     // Void Function dont return a value. They are used to print frequently used lines.
}

int main() {

    int num1;
    int num2;

    gm();
    
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: "<< sum(num1, num2) << endl;
    cout << "Difference of " << num1 << " and " << num2 << " is: " << difference(num1, num2) << endl;


    return 0;
}
