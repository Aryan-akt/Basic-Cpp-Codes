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
    int r;
    int s;
    int u;
    int t;
    int v;

    public:
        A(int x, int y) : q(y), p(x), r(x+y), s(x/3), u(t*1), t(p+5)    // It doesn't matter if "u" was written before or after
        {                                                               // "t" in the initialization section...
            v = 24;

            cout << "Constructor Invoked!!" << endl;
            cout << "p is " << p << endl
                 << "q is " << q << endl
                 << "r is " << r << endl
                 << "s is " << s << endl
                 << "t is " << t << endl
                 << "v is " << v << endl
                 << "u is " << u << endl;       // ... In any case, this line will give garbage value as output since "u" was
        }                                       // declared before "t", and thus "u" will be initialized before "t"
};

int main() {

    A a(3, 7);

    return 0;
}