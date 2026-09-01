// Static Members are defined for the whole class instead of a specific object.
// Static Members must be defined outside the class.

// Static Functions can access static data members only.
// Static Functions can run without making any object for the class.

#include <iostream>
using namespace std;

class student
{
    int m;
    static int RollNo;

    public:

        void setMarks(void)
        {
        cout << "Enter marks of student with roll no. " << RollNo << endl;
        cin >> m;
    }

    void displayMarks(void)
    {
        cout << "The marks of student with roll no. "<< RollNo << " is " << m << endl;
    }

    static void displayRollNo(void)         // This is definition of the static function.
    {
        cout << "The roll no. of this student is " << RollNo << endl;
        RollNo++;
    }

};

int student :: RollNo = 1;        // Default value of static variable is set to 0, which can be changed like this.

int main() {

    student Aryan, Tanmay, Smit;

    Aryan.setMarks();
    Aryan.displayMarks();
    student :: displayRollNo();
    
    Tanmay.setMarks();
    Tanmay.displayMarks();
    student :: displayRollNo();
    
    Smit.setMarks();
    Smit.displayMarks();
    student :: displayRollNo();

    return 0;
}