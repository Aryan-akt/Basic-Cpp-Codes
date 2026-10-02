// Hybrid Inheritance is when there is use of two or more inheritance types.

//      A
//      |
//   --------
//   |      |
//   B      C
//   |      |
//   --------
//      |
//      C
// above is the Inheritance Path of Hybrid Inheritance.

#include <iostream>
using namespace std;

class A     // Base class for B and C
{
    public:
    int a;
    
    void displaya()
    {
        cout << a << endl;
    }
};

class B : public A     // class derived from A
{
    public:
    int b;
    
    void displayb()
    {
        cout << a << endl;
        cout << b << endl;
    }
};

class C : public A     // class derived from A
{
    public:
    int c;
    
    void displayc()
    {
        cout << a << endl;
        cout << c << endl;
    }
};

class D : public B, public C        // class derived from B and C
{
    public:
    int d;
    
    void displayd()
    {
        cout << d << endl;
        cout << b << endl;
        cout << c << endl;
        // cout << a << endl;       // Cannot use 'a' because it is ambiguous
    }
};

int main() {

    A a;
    a.a = 1;
    
    B b;
    b.b = 2;
    b.a = 1;
    
    C c;
    c.c = 3;
    c.a = 1;
    
    D d;
    d.d = 4;
    d.b = 2;
    d.c = 3;

    a.displaya();

    b.displaya();
    b.displayb();

    c.displaya();
    c.displayc();

    d.displayb();       // This will have ambiguity error and print garbage value as output.
    d.displayc();       // This will have ambiguity error and print garbage value as output.
    d.displayd();
    // d.displaya();       // This will show ambiguity error.

    return 0;
}