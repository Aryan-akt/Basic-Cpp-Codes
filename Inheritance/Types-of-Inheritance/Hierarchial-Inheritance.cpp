// Hierarchial Inheritance is when two separate classes are derieved from one class.

//      A
//      |
//   --------
//   |      |
//   B      C
// above is the Inheritance Path of Hierarchial Inheritance.

#include <iostream>
using namespace std;

class Parent        // Base class
{
    public:
        string officeName;
        int ID;
};

class Daughter : public Parent     // Derived class
{
    public:
        string schoolName;
        int rollNo;
};

class Son : public Parent          // Derived class
{
    public:
        string collegeName;
        int studentID;
};

int main() {

    Son s;
    Daughter d;

    s.officeName;
    d.ID;

    return 0;
}