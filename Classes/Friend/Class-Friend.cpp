// Member functions of other classes can also be made friends with a different class so that it can access the private members of that class.
// Doing so requires the declaration and definition of classes to be in a specific order as shown bellow.

// An entire class can also be made friend with another class.
// This will allow all member function of that class to access all private member of the other class. NOT vice versa.
// This does not require any specific order.

#include <iostream>
using namespace std;

class Complex;

class Calculator
{
    public:
        int sumReal(Complex, Complex);
        int sumImg(Complex, Complex);

};

class Complex
{
    int a, b;

    // friend int Calculator :: sumReal(Complex, Complex);           // Individually declaring each member functions as friends.
    // friend int Calculator :: sumImg(Complex, Complex);

    friend class Calculator;            // Declares the entire class as a friend.

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

int Calculator :: sumReal(Complex o1, Complex o2)
    {
        return (o1.a) + (o2.a);
    }

int Calculator :: sumImg(Complex o1, Complex o2)
    {
        return (o1.b) + (o2.b);
    }

int main() {

    Complex c1, c2, c3;

    c1.setComplex(7, 2);
    c1.displayComplex();
    
    c2.setComplex(4, 6);
    c2.displayComplex();

    Calculator c9, c8;

    int r = c9.sumReal(c1, c2);
    cout << "The sum of real part is " <<  r << endl;

    int i = c8.sumImg(c1, c2);
    cout << "The sum of imaginary part is " << i << endl;

    return 0;
}