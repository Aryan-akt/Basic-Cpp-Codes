// In this example code, the compiler decides that which "display()" function is to be called (base class' or derived class') during
// the run time, hence this is an example of run time polymorphism.

#include <iostream>
using namespace std;

class base_class
{
    public:
        int var_base;
        void display()
        {
            cout << "Base class variable is " << var_base << endl;
        }
};

class derived_class : public base_class
{
    public:
        int var_derived;
        void display()
        {
            cout << "Base class variable is " << var_base << endl;
            cout << "Derived class variable is " << var_derived << endl;

        }
};

int main()
{
    base_class * base_class_pointer;
    derived_class obj_derived;
    base_class_pointer = &obj_derived;              // This points the base class pointer to the derived class object.

    base_class_pointer->var_base = 158;             // Even though the pointner is pointing to the derived class object, 
    base_class_pointer->display();                  // this will set the value of "var_base" as 158 and displays its value.
    
    // base_class_pointer->var_derived = 451;       // This will show an error since only the base class members and functions are
    // base_class_pointer->display();               // accessible. This is because the pointer belongs to the base class.

    derived_class * derived_class_pointer;
    derived_class_pointer = &obj_derived;           // Derived class pointer pointing to an object of derived class.

    derived_class_pointer->var_derived = 231;       // This will set the value of "var_derived" and "var_base" and 
    derived_class_pointer->var_base = 697;          // display both of them.
    derived_class_pointer->display();

    return 0;
}

// If the term "virtual" is used in line 11 of this code such as "void virtual display()", only then the derived class function will be
// called during both the calls of "display()" function.

// Virtual function is used when the base class pointer needs to be used with derived class functions instead of base class functions.