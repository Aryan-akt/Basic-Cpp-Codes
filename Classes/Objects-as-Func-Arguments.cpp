// Objects can also be passed as function arguments.

#include <iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        void setComplex(int x, int y)
        {
            a = x;
            b = y;
        }

        void addComplex(complex o1, complex o2)     // This function takes objects of class 'complex' as its input.
        {
            a = o1.a + o2.a;                        // a = a from object 1 (o1) + a from object 2 (o2)
            b = o1.b + o2.b;                        // b = b from object 1 (o1) + b from object 2 (o2)
        }

        void displayComplex(void)
        {
            static int n = 1;
            cout << "Complex number " << n << " is " << a << " + " << b << "i" << endl;
            n++;
        }

};

int main() {

    complex c1, c2, c3;

    c1.setComplex(2, 9);
    c1.displayComplex();
    
    c2.setComplex(5, 4);
    c2.displayComplex();
    
    c3.addComplex(c1, c2);
    c3.displayComplex();

    return 0;
}