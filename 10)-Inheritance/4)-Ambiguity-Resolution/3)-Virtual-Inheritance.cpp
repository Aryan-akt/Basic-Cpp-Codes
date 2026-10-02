// Ambiguity also occurs in hybrid inheritance when a child class inherits from two parent classes that share a common
// grandparent class. This creates two separate duplicate copies of the grandparent class inside the child class.

// To fix this, you must inherit the grandparent class as "virtual".
// This ensures that only a single shared instance of the base class is created in the hierarchy.

#include <iostream>
using namespace std;

class grandparent
{
    public:
        void show()
        {
            cout << "Grandparent class" << endl;
        }
};

class mother : virtual public grandparent
{

};

class father : public virtual grandparent           // Placement of "virtual" can either be before or after the visibility mode.
{

};

class child : public mother, public father
{

};

int main() {

    child obj;

    obj.show();         // Works perfectly fine with no ambiguity because of "virtual".

    return 0;
}