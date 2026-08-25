// Structures are used when a collection of different types of variables are to be stored together.

#include <iostream>
using namespace std;

typedef struct Employee {       // 'typedef' is used to type just 'ep' instead of typing 'struct Employee' every time.
        int ID;
        char FavLetter;
        float Salary;
}ep;                            // We can use any short form.

int main() {

    struct Employee Jay;        // Jay is defined as an employee
    ep Veeru;                   // Using shortcut, Veeru is also an employee

    Jay.ID = 1;
    Veeru.ID = 2;
    Jay.FavLetter = 'V';
    Veeru.FavLetter = 'J';
    Jay.Salary = 5200.75;
    Veeru.Salary = 6000.35;

    cout << "The employee id of Jay is " << Jay.ID << endl;
    cout << "The employee id of Veeru is " << Veeru.ID << endl;
    cout << "Jay's Favorite letter is " << Jay.FavLetter << endl;
    cout << "Veeru's Favourite letter is " << Veeru.FavLetter << endl;
    cout << "Jay's daily salary is " << Jay.Salary << endl;
    cout << "Veeru's daily salary is " << Veeru.Salary << endl;

    return 0;
}