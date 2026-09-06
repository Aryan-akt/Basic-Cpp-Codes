#include <iostream>
using namespace std;

class eqnOfPlane
{
    int a, b, c ,d;

    public:
        eqnOfPlane(int, int, int, int);

        void displayEqn()
        {
            cout << "The equation of plane is " << a << "x + " << b << "y + " << c << "y + " << d << " = 0" << endl;
        }
};

 eqnOfPlane :: eqnOfPlane(int p, int q, int r , int s)      // This is a parameterized constructor.
{
    a = p;
    b = q;
    c = r;
    d = s;
}

int main() {

    // Parameterized Constructors can be called in the following two ways :-

        // Implicit Call
        eqnOfPlane m(2, 5, 9, 4);       // Defining objects like this initiallizes its parameters.
        m.displayEqn();

        // Explicit Call
        eqnOfPlane n = eqnOfPlane(3, 6, 12, 1);
        n.displayEqn();

        // eqnOfPlane n;                // This shows an error since no default constructor exists for the class "eqnOfPlane".

    return 0;
}