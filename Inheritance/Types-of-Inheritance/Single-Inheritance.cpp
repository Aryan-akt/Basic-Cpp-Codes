// Single Inheritance is the simplest form of Inheritance.
//  In Single Inheritance, 1 child class is derived from 1 Base class.

// Below is a simple example of Single Inheritance.

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