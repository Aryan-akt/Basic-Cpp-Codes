// Multiple Inheritance is when 1 child class is derived from 2 or more base classes.

/*
Syntax of Multiple Inheritance:
    class {{derived class name}} : {{visibility mode}} {{1st base class name}}, {{visibility mode}} {{2nd base class name}},...
    {
        Class Body (members/methods/etc...)
    }
*/

// Each base class has its own visibility mode.

// Below is a simple example of Multiple Inheritance.

#include <iostream>
using namespace std;

class semester_1
{
    protected:
        float percentage_1;
    public:
        void setPer1(int a)
        {
            percentage_1 = a;
        }
};

class semester_2
{
    protected:
        float percentage_2;
    public:
        void setPer2(int b)
        {
            percentage_2 = b;
        }
};

class finalPercentage : public semester_1, public semester_2
{
    public:
        void display()
        {
            cout << "The final percentage of the student is: " << (percentage_1 + percentage_2)/2 << endl;
        }
};

int main() {

    finalPercentage s1, s2;
    
    s1.setPer1(95);
    s1.setPer2(96);
    s1.display();
    
    s2.setPer1(86);
    s2.setPer2(92);
    s2.display();

    return 0;
}