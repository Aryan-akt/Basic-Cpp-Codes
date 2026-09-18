// Ambiguity error occurs when a derived class inherits members (functions or variables) with the same name from multiple paths,
// leaving the compiler unable to decide which one to use.

#include <iostream>
using namespace std;

class b1
{
    public:
        int x = 1;

        void greet()
        {
            cout << "Good morning!" << endl;
        }
};

class b2
{
    public:
        int x = 2;

        void greet()
        {
            cout << "Good night!" << endl;
        }
};

class d : public b1, public b2      // Both the base classes has member "x" and member function "greet()".
{

};

int main() {

    d a;

    // Scope resolution operator can be used to determine which class' members are to be used.
    cout << a.b1::x << endl;
    a.b1::greet();

    cout << a.b2::x << endl;
    a.b2::greet();

    return 0;
}