// Enum (Enumeration) is used to make the code more clear and readable.

#include <iostream>
using namespace std;

int main() {

    enum team {solo, duo, trio, squad};     // Assigns 'solo' the value '0', 'duo' as '1' and so on.

    team one = solo;
    team two = duo;

    // either
    cout << one << endl;
    cout << two << endl;
    // or
    cout << trio << endl;
    cout << squad << endl << endl;

    cout << (one == solo) << endl;          // Gives output as 1 (true)
    cout << (two == trio);                  // Gives output as 0 (false)

    return 0;
}