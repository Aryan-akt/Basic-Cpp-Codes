// A destructor is also created with the same name of the class but with a "~" prefix.
// A destructor never takes an argument nor does it return any value.
// When the compiler figures that an object is no longer required to be loaded in the memory, it destroys that object.

#include <iostream>
using namespace std;

int y = 0;

class number
{
    int x;

    public:
        number()        // Constructor
        {
            y++;
            cout << "Constructor is called for object number " << y << endl;
        }

        ~number()       // Destructor
        {
            cout << "Destructor is called for object number " << y << endl;
            y--;
        }
};

int main() {

    number a;

    // The scope of elements created inside the block is within the block itself.
    // Elements created inside a block are destroyed when the block ends.
    {
        cout << "Entering a block" << endl;
        number b, c;
        cout << "Exiting the block" << endl;
    }
    // Destructors for 'b' and 'c' will be called when the block ends.

    // Destructor for 'a' will be called when the main function ends.
    return 0;
}