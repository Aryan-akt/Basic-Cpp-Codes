// Default Arguments are variables in a function that are given a default value inside the paranthesis.
// When needed, we can use a different value for Default Arguments by simply adding a value in paranthesis in the call function.
// Default Argument should be entered after the compulsory arguments, otherwise it shows error.

#include <iostream>
using namespace std;

int loan(int amount, double interest = 1.04) {          // Here interest is a default argument.
    return amount * interest;
}

int main() {

    int a = 1000000, b = 1500000;

    cout << "If you take a loan of Rs " << a << ", you will have to return " << loan(a);
    cout << ". and if you take a loan of " << b << ", you will have to return " << loan(b) << endl;
    // No need to write a second value inside paranthesis as it is already set at a default value of '1.04'.

    cout << "\nWhereas for Premium Card Holders, if you take a loan of Rs " << a << ", you will have to return only " << loan(a ,1.02);
    cout << "and if you take a loan of Rs " << b << ", you will have to return only " << loan(b ,1.02);
    // By entering 1.02 as a second value it takes 'interest' as 1.02 instead of 1.04.

    return 0;
}