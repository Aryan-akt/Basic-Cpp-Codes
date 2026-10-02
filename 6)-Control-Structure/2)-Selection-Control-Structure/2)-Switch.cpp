// Switch-case statement matches a single variable against a list of fixed, exact values.
// "Break" must be used after every case, otherwise the code doesn't run like it is supposed to.

/*
Switch Selection Structure Syntax:

    switch (Variable)
    {
    case 1:
        [code1] << endl;
        break;

    default:
        [code_default] << endl;
        break;
    }
*/

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks" << endl;
    cin >> marks;

    switch (marks)
    {
    case 0:
        cout << "You have recieved 0 marks in your test. Very dissapointing.";
        break;
    case 100:
        cout << "Congratulations!! You have recieved 100 marks in your test";
        break;
    case 35:
        cout << "You barely passed by recieving 35 marks in your test. Study harder next time.";
        break;
    
    default:
        cout << "No remarks";
        break;
    }

    return 0;
}