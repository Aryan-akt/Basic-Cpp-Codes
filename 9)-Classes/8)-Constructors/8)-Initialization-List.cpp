// Intialization list is just another way of initializing members using a constructor.

/*
Syntax for Initialization List in constructor :-

constructor(arguments) : initialization section
{
    assignments + other code;
}
*/

#include <iostream>
using namespace std;

class A
{
    int p;
    int q;

    public:
        A(int x, int y) : p(x), q(y)
        {
            cout << "Constructor Invoked!!" << endl;
            cout << "p is " << p << endl << "q is " << q << endl;
        }
};

int main() {

    A a(3, 7);

    return 0;
}