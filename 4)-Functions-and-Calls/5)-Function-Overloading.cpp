// Function Overloading allows to define multiple functions with the same name in the same scope, provided they have different parameter lists.
// This is also an example of Polymorphism

#include <iostream>
using namespace std;

int volume(int a, int b, int c) {
    cout << "The volume of a cuboid with hieght " << a << " breadth " << b << " and length " << c << " is ";
    return a * b * c;
}

int volume(int a) {
    cout << "The volume of a cube with side length " << a << " is ";
    return a * a * a;
}

int volume(double r, int h) {
    cout << "The volume of a cylinder with radius " << r << " and hieght " << h << " is ";
    return 3.14 * r * r * h;
}

int main() {

    cout << volume(8, 6, 7) << endl;
    cout << volume(4) << endl;
    cout << volume(2.5, 5) << endl;
    // Even with same names, all these functions give the correct required output.

    return 0;
}