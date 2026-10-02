// Function Prototypes are used to tell the compiler that a Function has been defined further in the code.

#include <iostream>
using namespace std;

int product(int a, int b);      // This indicates that product has been defined somewhere below.

int division(int, int);         // Writing 'a' and 'b' is optional in Funtion Prototypes.

int main() {

    int num1;
    int num2;
    
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Product of " << num1 << " and " << num2 << " is: " << product(num1, num2) << endl;
    cout << "Division of " << num1 << " and " << num2 << " is: " << division(num1, num2) << endl;

    return 0;
}

// 'product' and 'division' functions are defined here.
int product(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}