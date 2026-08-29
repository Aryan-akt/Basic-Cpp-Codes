// A class is a user-defined blueprint or template.
// An object is a real-world instance or entity created from that blueprint.

#include <iostream>
using namespace std;

typedef class numbers {

    private:
        int x, y, z;
    public:
        int p, q;
    
    void SetData(int a, int b, int c);      // This is a Function Prototype which tells the compiler that this function is defined further i.e. line 24.
    void GetData() {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
        cout << "The value of z is " << z << endl;
        cout << "The value of p is " << p << endl;
        cout << "The value of q is " << q << endl;
    }
}num;       // 'num' can now be used insead of 'numbers'.

void numbers :: SetData(int a, int b, int c) {      // This tells the compiler that this is the function for which a prototype was written inside the class 'numbers'.
    x = a;
    y = b;
    z = c;
}

int main() {

    num first;      // Here 'first' is defined as an object of class 'numbers'.

    // first.x = 24;    <--- This would show an error because x is inaccesible as it is a private variable. Same applies for y and z too.
    first.p = 47;       // On the other hand, p and q can be defined like this as they are public variables.
    first.q = 18;
    first.SetData(24, 89, 63);      // Variables which are private can only be accessed using a function which was defined inside the class itself
    first.GetData();

    return 0;
}