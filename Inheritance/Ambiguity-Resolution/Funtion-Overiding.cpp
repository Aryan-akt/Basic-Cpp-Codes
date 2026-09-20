// Function overiding can be done in the derived class to prevent ambiguity errors.
// Compiler gives precedence to the members in derived class over the base class.

#include <iostream>
using namespace std;

class b1
{
    public:
        int x = 50;

        void ques()
        {
            cout << "How are you?" << endl;
        }
};

class b2
{
    public:
        int x = 100;

        void ques()
        {
            cout << "Where are you?" << endl;
        }
};

class d : public b1, public b2
{
    public:
        int x = 25;             // Overidden the value of "x" as 25.

        void ques()
        {
            b1 :: ques();           // One or both the functions of the parent class can be chosen to be called from here.
            // b2 :: ques();        // Un-commenting this will call the function from "b2".
        }
};

int main() {

    d a;

    cout << a.x << endl;        // Since derived class is given presidence, this gives 25 as output.
    a.ques();                   // Calls "d::ques()" without any errors.

    return 0;
}