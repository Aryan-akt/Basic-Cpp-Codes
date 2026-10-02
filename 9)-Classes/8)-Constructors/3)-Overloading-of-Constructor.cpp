// Constructor Overloading can be done similarly like function overloading.
// It helps to set a default constructor along with multiple parameterized constructors.

#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        void display()
        {
            cout << "The complex number is " << a << " + " << b << "i" << endl;
        }

    complex() {                     // Default Constructor
        a = 0;
        b = 0;
    }

    complex(int x) {                // Parameterized Constructor
        a = x;
        b = 0;
    }

    complex(int x, int y) {         // Parameterized Constructor
        a = x;
        b = y;
    }
};

int main() {

    complex c1;
    c1.display();

    complex c2(5);
    c2.display();

    complex c3(4, 9);
    c3.display();

    // The compiler understands which Constructor to use by observing the number of arguments passed while defining an object.

    return 0;
}