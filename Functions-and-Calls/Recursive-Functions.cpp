#include <iostream>
using namespace std;

int factorial(int x) {
    if(x <= 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {

    int a;

    cout << "Enter the number: " << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    return 0;
}