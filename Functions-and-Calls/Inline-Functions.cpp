// Inline Functions replaces the 'function call' with the 'actual function' itself.
// Inline Functions are used when a small function is to be used many times in a code.

/* Using Inline Functions is not reccommended for:
1. Larger functions, since it takes up lots of cache and might turn out to be dissadvantageous.
2. Recursions
3. When using Static Variables */

#include <iostream>
using namespace std;

inline int diff(int a, int b){      // Just add 'inline' before the function to make it an inline function.
    return a - b;
}

int main() {

int b = 85, d = 36;

    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
    cout << "The difference is " << diff(b, d) << endl;
  
    return 0;
}