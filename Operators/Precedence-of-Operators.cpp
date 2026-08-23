// Each operator has its precedence.
// Scope resolution operator has the highest precedence.
// Comma has the lowest precedence.

#include <iostream>
using namespace std;

int main() {

    cout << "The solution of equation 5+9*3 is: " << 5+9*3 << endl;             // This runs "9*3" first, then "27+5" as it has higher precedence

    cout << "The solution of equation 120/5*2 is: " << 120/5*2 << endl;         // This runs "120/5" first, then "24*2" as it has higher precedence
    
    cout << "The solution of equation (5+9)*3 is: " << (5+9)*3;                 // This runs "5+9" first as it is in paranthesis, then "14*3",  since paranthesis has second highest precedence.

    return 0;
}