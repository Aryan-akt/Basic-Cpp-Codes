// Multilevel Inheritance is when a class is derived from a derived class.
// Here 'A' is base class for 'B' and 'B' is base class for 'C'
// [ A --> B --> C ] is called the Inheritance Path.

// Below is a simple example of Multilevel Inheritance.


#include <iostream>
using namespace std;

class student
{
    protected:
        int rollNo;
    public:
        void setRollNo(int);
        void getRollNo();
};

void student :: setRollNo(int r)
{
    rollNo = r;
}

void student :: getRollNo()
{
    static int n = 1;
    cout << "The roll no of student no. " << n << " is " << rollNo << endl;
    n++;
}

class exam : public student
{
    protected:
        float physics;
        float chemistry;
        float maths;
        float computerScience;
    public:
        void setMarks(float, float, float, float);
        void getMarks();
};

void exam :: setMarks(float p, float c, float m, float cs)
{
    physics = p;
    chemistry = c;
    maths = m;
    computerScience = cs;
}

void exam :: getMarks()
{
    cout << "The marks obtained by this student are: \n"
         << physics << " in Physics \n"
         << chemistry << " in Chemistry \n"
         << maths << " in Maths \n"
         << computerScience << " in Computer Science" << endl;
}

class result : public exam
{
    float percentage;
    
    public:
        void display()
        {
            getRollNo();
            getMarks();
            cout << "The total percentage of this student is " << (physics + chemistry + maths + computerScience)/4 << endl;
        }

};

int main() {

    result Aryan, Shreya, Aditya;

    Aryan.setRollNo(9);
    Aryan.setMarks(95, 89, 98, 99);
    Aryan.display();

    cout << endl;

    Shreya.setRollNo(16);
    Shreya.setMarks(98, 94, 88, 93);
    Shreya.display();

    cout << endl;

    Aditya.setRollNo(4);
    Aditya.setMarks(94, 99, 92, 87);
    Aditya.display();

    return 0;
}