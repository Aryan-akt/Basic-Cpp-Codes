// Calculating the return value on a principal amount with an interest for certain years.
// Interest can be entered in either "0.07" format or percentage format like "7".

#include <iostream>
using namespace std;

class bank
{
    int principal, years;
    float interest, returnValue;

    public:
        bank(){}
        void calcInteresti();
        void calcInterestf();
        void calc();

        void setDetails()
        {
            cout << "Enter your principal amount:" << endl;
            cin >> principal;
            cout << "Enter the time invested in years:" << endl;
            cin >> years;
            cout << "Enter the rate of interest (Example: 0.07 or 7):" << endl;
            cin >> interest;
        }

        void displayReturn()
        {
            cout << "Your return value on the principal amount of Rs " << principal << " in " << years
                 << " years will be Rs " << returnValue << endl;
        }
};

void bank :: calcInterestf()            // This function is used when interest is entered in "0.07" format.
{
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}

void bank :: calcInteresti()            // This function is used when interest is entered in "7" or percentage format.
{
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + (interest / 100));
    }
}

void bank :: calc()         // This function decides if interest is in "int" format or "float",
{                           // then it runs the corresponding function to calculate the return value accordingly.
    if(interest >= 1)
    {
        calcInteresti();
    }
    else
    {
        calcInterestf();
    }
}

int main() {

    bank b1;

    b1.setDetails();
    b1.calc();
    b1.displayReturn();

    return 0;
}