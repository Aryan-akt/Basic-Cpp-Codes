// Structures are used when a collection of different types of variables are to be stored together.

#include <iostream>
using namespace std;

typedef struct Employee {       // 'typedef' is used to type just 'ep' instead of typing 'struct Employee' every time.

        int ID;                 // 4 bytes
        char FavLetter;         // 1 byte       //int, char and float collectively take up 9 bytes of memory.
        float Salary;           // 4 bytes

} ep ;                          // We can use any short form instead of 'ep'.

int main() {

    struct Employee Jai;        // Jay is defined as an employee
    ep Veeru;                   // Using shortcut, Veeru is also an employee

    Jai.ID = 1;
    Veeru.ID = 2;
    Jai.FavLetter = 'V';
    Veeru.FavLetter = 'J';
    Jai.Salary = 5200.75;
    Veeru.Salary = 6000.35;

    cout << "The employee id of Jai is " << Jai.ID << endl;
    cout << "The employee id of Veeru is " << Veeru.ID << endl;
    cout << "Jai's Favorite letter is " << Jai.FavLetter << endl;
    cout << "Veeru's Favourite letter is " << Veeru.FavLetter << endl;
    cout << "Jai's daily salary is " << Jai.Salary << endl;
    cout << "Veeru's daily salary is " << Veeru.Salary << endl;

    return 0;
}