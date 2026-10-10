/*
Theory of constructors in derived class :-

1. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
2. But if there's one or more arguments in base class constructor, derived class needs to pass arguments to the base class constructor.
3. If both base and derived classes have constructors, base class constructor is executed first.
4. In multiple inheritance, base classes are constructed in the order in which they appear in the derived class declaration.
5. If a class is virtually derived then it is given higher priority even if its not the first class in declaration.
6. If there are multiple virtual classes, they are invoked in the order of declaration.
7. In multilevel inheritance, the constructor are executed in the order they of inheritance.
*/

/*
Syntax for defining a derived class constructor :-

    derived-class(int a, int b) : base(a)
    {
        derived-class-data = b;
    }

This initializes the derived class' data as "b" and also runs base class' constructor with its input being "a".
If there is multiple inheritance, then more base class constructors can be added next to "base(a)" after a comma.
The body is called after all constructors are finished executing.
*/

#include <iostream>
using namespace std;

class base1
{
    int data1, data2;

    public:
        base1(int a, int b)
        {
            data1 = a;
            data2 = b;
            cout << "Base1 class constructor called" << endl;
        }

        void displayData()
        {
            cout << "Value of data1 is " << data1 << " and data2 is " << data2 << endl;
        }
};

class base2
{
    int data3, data4;

    public:
        base2(int a, int b)
        {
            data3 = a;
            data4 = b;
            cout << "Base2 class constructor called" << endl;
        }

        void displayData()
        {
            cout << "Value of data3 is " << data3 << " and data4 is " << data4 << endl;
        }
};

class derived : public base1, public base2                   // base1 constructor will be called first as it is written first.
// class derived : public base1, virtual public base2        // Since base2 is derived virtually, its constructor would be called first.
{
    int derived1, derived2;

    public:
        derived(int a, int b, int c, int d, int e, int f) : base1(a, b), base2(c, d)        // Here even if the order of base classes is
        {                                                                                   // different, the order of constructors being
            derived1 = e;                                                                   // called does not change.
            derived2 = f;
            cout << "Derived class constructor called" << endl;     
        }
        
        void displayData()
        {
            cout << "Value of derived1 is " << derived1 << " and derived2 is " << derived2 << endl;
        }
};

int main()
{
    derived d(1, 2, 3, 4, 5, 6);

    d.displayData();            // Calls derived class constructor as it is given priority.
    d.base1::displayData();
    d.base2::displayData();

    return 0;
}