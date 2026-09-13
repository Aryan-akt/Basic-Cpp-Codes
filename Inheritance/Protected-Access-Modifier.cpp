// 1. Members of a class can also be set to a 'Protected' mode which allows the Inheritance of those members while keeping
//    them inaccessible for other function/calls outside those two classes.

// 2. The following table depicts how each type of member (Private/Public/Protected) is derived into the child/derived
//    class depending upon the visibility mode of Inheritance.

/*                        Public Derivation       Private Derivation      Protected Derivation

Private Members             Not Inherited           Not Inherited            Not Inherited
Protected Members             Protected                Private                  Protected
Public Members                 Public                  Private                  Protected
*/

#include <iostream>
using namespace std;

class base
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
};

class derived : protected base
{

};

int main() {

    base b;
    derived d;

    // cout << d.x;         // This shows error because x, being a private member, is not inherited in derived class.
    // cout << d.y;         // This shows error because y, is protected and inaccissible outside the class.
    // cout << d.z;         // This shows error because z, is protected and inaccissible outside the class (This would not have shown error if visibility mode was set to public).
    
    return 0;
}