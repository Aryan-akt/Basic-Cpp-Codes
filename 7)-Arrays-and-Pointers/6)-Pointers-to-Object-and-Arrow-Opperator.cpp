// A "Pointer to an Object" stores the memory address of a class' object.

// The "Arrow Operator" (->) is a syntactic shortcut used exclusively with pointers to access the members (variables or functions)
// of the object being pointed to.

#include <iostream>
using namespace std;

class student
{
    int rollNo, marks;

    public:
        void set(int x, int y)
        {
            rollNo = x;
            marks = y;
        }
        void get()
        {
            cout << "Student with roll no. " << rollNo << endl
                 << "recieved marks - " << marks << endl << endl;
        }

};

int main()
{
    // POINTER TO OBJECT :-

    // student s1;                      // [1]
    // student *ptr = &s1;              // [2]
    student *ptr = new student;         // [3]

    // FOLLOWING CODES GIVE THE SAME OUTPUT WHEN USED WITH THE GIVEN COMBINATION.

    // s1.set(1, 92);                   // Used with [1]
    // s1.get();

    // (*ptr).set(1, 92);               // Used with [1]+[2] OR with [3]
    // (*ptr).get();                    // Parenthesis are essential here due to operator precedence.

    ptr->set(1,92);                     // Used with [1]+[2] OR with [3]
    ptr->get();

    

    // ARROW OPPERATOR :-

    student *p = new student[4];        // This creates an array of 4 new objects of class "student".

    p->set(2,87);
    p->get();
    (p+1)->set(3,83);
    (p+1)->get();
    (p+2)->set(4,75);
    (p+2)->get();
    (*(p+3)).set(5,96);
    (*(p+3)).get();

    return 0;
}