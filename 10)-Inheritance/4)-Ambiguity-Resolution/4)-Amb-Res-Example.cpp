// The following code depicts the usage of Ambiguity Resolutions in different ways.

#include <iostream>
using namespace std;

class student
{
    protected:
        int rollNo;
        char division;

    public:
        void setDetails(int x, char y)
        {
            rollNo = x;
            division = y;
        }

        void display()
        {
            cout << "Your roll no. is " << rollNo << " and division is " << division << endl << endl;
        }
};

class theory : virtual public student
{
    protected:
        float tPhy, tChem, tMath;

    public:
        void setMarks(float x, float y, float z)
        {
            tPhy = x;
            tChem = y;
            tMath = z;
        }

        void displayMarks()
        {
            cout << "Your theory marks are as follows: " << endl
                 << "Physics - " << tPhy << endl
                 << "Chemistry - " << tChem << endl
                 << "Maths - " << tMath << endl << endl;
        }
};

class lab : public virtual student
{

    protected:
        float lPhy, lChem, lMath;

    public:
        void setMarks(float x, float y, float z)
        {
            lPhy = x;
            lChem = y;
            lMath = z;
        }

        void displayMarks()
        {
            cout << "Your lab marks are as follows: " << endl
                 << "Physics - " << lPhy << endl
                 << "Chemistry - " << lChem << endl
                 << "Maths - " << lMath << endl << endl;
        }
};

class sports : virtual public student
{
    protected:
        float score;

    public:
        void setScore(float x)
        {
            score = x;
        }

        void displayScore()
        {
            cout << "Your sports score is " << score << endl << endl;
        }
};

class result : public theory, public lab, public sports
{
    private:
        float total;

    public:
        void displayTotal()
        {
            total = ((tPhy + tChem + tMath)/3 + (lPhy + lChem + lMath)/3 + score)/3;
            display();
            theory :: displayMarks();
            lab :: displayMarks();
            displayScore();
            cout << "Your total percentage is " << total << endl;
        }
};

int main() {

    result aryan;

    aryan.setDetails(51, 'b');
    aryan.theory::setMarks(93, 94, 98);
    aryan.lab::setMarks(96, 92, 98);
    aryan.setScore(95);
    aryan.displayTotal();

    return 0;
}