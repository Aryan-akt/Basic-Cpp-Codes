#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    
    cout << "Enter the value of first number: \n";      // "<<" is called an Insertion Operator.
    cin >> num1;                                        // ">>" is called an Extraction Operator.
    
    cout << "Enter the value of second number: \n";
    cin >> num2;

    cout << "The sum is " << num1 + num2 << endl;
    cout << "The difference is " << num1 - num2;

    return 0;
}