// A friend function is a non member function which can access private members.
// These usually contain objects as arguments.
// A friend function is declared by placing a declaration of the function inside the class.
// The declaration can be done in either public section or private.
// It is not in the scope of class and therefore they cannot be called from the object of that class.
// Eg :- c3.sumComplex(c1, c2) is invalid.
// They can be invoked without the help of any object.
// It cannot access the member of the class directly by their names and need 'object_name.member_name' to access a member of an object.


#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumComplex(complex o1, complex o2);      // This line tells the complier that 'sumComplex' can access private members of class 'complex'.

    public:
    
        void setComplex(int x, int y)
        {
            a = x;
            b = y;
        }

        void displayComplex(void)
        {
            static int n = 1;
            cout << "Complex number " << n << " is " << a << " + " << b << "i" << endl;
            n++;
        }


};

complex sumComplex(complex o1, complex o2)
{
    // cout << a;         // This will give error since it cannot access a member directly.
    complex o3;
    o3.setComplex((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {

    complex c1, c2, c3;

    c1.setComplex(5, 9);
    c1.displayComplex();
    
    c2.setComplex(6, 2);
    c2.displayComplex();

    c3 = sumComplex(c1, c2);
    c3.displayComplex();

    return 0;
}