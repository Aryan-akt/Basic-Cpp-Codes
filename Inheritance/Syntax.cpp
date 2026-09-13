// Inheretence means to derive a new class from an already existing class.

// Private members of base class cannot be derived.

// There are two types of visibility modes :
//    1. Public visibility mode : Public members of base class are made public members of derived class.
//    2. Private visibility mode : Public members of base class are made private members of derived class.
//    3. The default visiblity mode is private. (when mode is not specified in the syntax)

/*
Syntax of Inheriting a class :

class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    members/methods/etc...
}
*/

// Below is a basic example of Single Inheritance.

#include <iostream>
using namespace std;

// Base Class
class vehical
{ 
    public:
        int vehicalNumber;
        float mileage;

        vehical(){}

        void set(int inpvehicalNumber, float inpmileage)
        {
            vehicalNumber = inpvehicalNumber;
            mileage = inpmileage;
        }
};

// Derived Class
class car : public vehical
{
    string brand;
    int price;

    public:
        car(string inpbrand, int inpprice)
        {
            brand = inpbrand;
            price = inpprice;
        }

        void display()
        {
            cout << "The vehical number of " << brand << " is " << vehicalNumber << ", mileage is " << mileage
                 << ", price is " << price << endl;
        }
};

int main() {

    car c1("Mercedes", 20000000), c2("Porsche", 35000000);

    c1.set(2564, 19.5);
    c2.set(6952, 10.2);

    c1.display();
    c2.display();

    return 0;
}