// Copy constructors are used to create an object which is same as an already existing object.
// If there no copy constructor is defined in the code, the compiler provides its own copy constructor when used.

#include <iostream>
using namespace std;

class marks
{
    int m;

    public:
        void display()
        {
            cout << "The marks are " << m << endl;
        }

        marks()
        {
            m = 0;
        }

        marks(int x)
        {
            m = x;
        }

        marks(marks &obj)
        {
            cout << "Copy constructor used" << endl;
            m = obj.m;
        }

};

int main() {

    marks m1;

    m1.display();

    marks m2(5);
    m2.display();

    marks m3(m2);       // Even if the copy constructor is not defined on line no. 24, this would have still copied data from m2 to m3.
    m3.display();       // But the line "Copy constructor used" wont be printed in such case.

    marks m4;
    m4 = m2;            // Copy constructor will not be invoked here since the object 'm4' was already defined.
    m4.display();       // But m4 would still become a copy of m2.

    marks m5 = m2;      // Copy constructor will be invoked here since m5 is defined in the same line.
    m5.display();

    return 0;
}