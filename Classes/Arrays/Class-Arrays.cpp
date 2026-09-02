// Arrays can be made inside classes just like they are made outside.

#include <iostream>
using namespace std;

class shop
{
    // These are by default set to private.
    int ItemID[100];        // This makes an Array of 100 memory allocations for 'ItemID'.
    int ItemPrice[100];
    int counter;

    public:

        void initCounter(void) {counter = 0;}
        void Set_Price_ID(void);
        void DisplayPrice(void);
};

void shop :: Set_Price_ID(void)
{
    static int i = 1;
    cout << "Enter the ID of item number " << i << " :" << endl;
    cin >> ItemID[counter];
    cout << "Enter the Price of item number " << i << " :" << endl;
    cin >> ItemPrice[counter];

    counter++;
    i++;
}

void shop :: DisplayPrice(void)
{
    for(int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << ItemID[i] << " is Rs " << ItemPrice[i] << endl;
    }
}

int main() {

    shop Shelf_1;

    Shelf_1.initCounter();
    Shelf_1.Set_Price_ID();
    Shelf_1.Set_Price_ID();
    Shelf_1.Set_Price_ID();
    Shelf_1.Set_Price_ID();
    Shelf_1.DisplayPrice();         // Using this function just once prints the Price and ID of all items because it was made usind a for loop.

    return 0;
}