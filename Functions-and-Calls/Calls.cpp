#include <iostream>
using namespace std;

void Swap(int a, int b) {               // This does not work because instead of actual parameters, formal parameters exchange values.
    int temp = a;                       // Also, values of formal parameters are deleted once the program execution is complete.
    a = b;
    b = temp;
}

// Call by Reference using Pointers
void SwapPointer(int *a, int *b) {      // This successfully swaps the values of two variables.
    int temp = *a;                      // This function changes the 'value at' a and b.
    *a = *b;
    *b = temp;
}

// Call by Reference using Reference Variables
void SwapRefVar(int &a, int &b) {       // This also successfully swaps the values of two variables.
    int temp = a;                       // In this case, 'a' becomes a reference variable of 'n' and 'b' of 'm'.
    a = b;
    b = temp;
}

int main() {

    int x = 4, y = 8;
    int p = 3, q = 7;
    int n = 5, m = 2;

    cout << "The value of x was " << x << " and value of y was " << y << endl;
    Swap(x, y);
    cout << "The value of x is " << x << " and value of y is " << y << endl << endl;
    // This will not swap x and y


    cout << "The value of p was " << p << " and value of q was " << q << endl;
    SwapPointer(&p, &q);
    cout << "The value of p is " << p << " and value of q is " << q << endl << endl;
    // This will swap p and q


    cout << "The value of n was " << n << " and value of m was " << m << endl;
    SwapRefVar(n, m);
    cout << "The value of n is " << n << " and value of m is " << m << endl;
    // This will swap n and m

    return 0;
}