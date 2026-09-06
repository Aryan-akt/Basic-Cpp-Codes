// Constructor is a special member function with the same name as of the class.
// It is used to initialize the objects of the class.
// It is automatically invoked whenever an object is defined.
// A Constructor should be defined\declared in the public section of the class.
// Constructors can not return values and they dont have a return type (void\int).
// Address of Construuctors cannot be referred.

#include <iostream>
using namespace std;

class eqnOfLine
{
    int a, b, c;
    
    public:

    void setEqn(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void displayEqn()
    {
        cout << "The equation of line is " << a << "x + " << b << "y + " << c << endl;
    }

    eqnOfLine();        // Declaration of a Constructor does not require a type (void\int).
};

eqnOfLine :: eqnOfLine()        // Whenever an object is created, 'a', 'b', and 'c' will be initiallized with the following values.
{                               // This is a Default Constructor as it takes no parameters/arguments.
    a = 1;
    b = 1;
    c = 1;
}

int main() {

    eqnOfLine e1, e2;

    e1.displayEqn();            // These will display the initialized equation "1x + 1y + 1".
    e2.displayEqn();

    e1.setEqn(9, 5, 12);
    e1.displayEqn();            // Values can still be altered later.


    return 0;
}