// Recursion is when a function is called inside the function itself.
// This keeps repeating the function until it meets the base condition inside 'if' bracket.

#include <iostream>
using namespace std;

// Recursive Function for factorial of a number.
int factorial(int x) {                                // factorial(4) = 4 * factorial(3)
    if(x <= 1) {                                      //              = 4 * 3 * factorial(2)
        return 1;                                     //              = 4 * 3 * 2 * factorial(1)
    }                                                 //              = 4 * 3 * 2 * 1
    return x * factorial(x - 1);                      //              = 24
}

// Recursive Function for fibonacci series.
int fibonacci(int x) {                                // fibonacci(4) = fibonacci(3) + fibonacci(2)
    if(x <= 2) {                                      //              = fibonacci(2) + fibonacci(1) + fibonacci(1) + fibonacci(0)
        return 1;                                     //              = 1 + 1 + 1 + 1
    }                                                 //              = 4
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {

    int a;

    cout << "Enter the number: " << endl;
    cin >> a;
    
    cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The " << a << " number in fibonacci series is " << fibonacci(a);

    return 0;
}