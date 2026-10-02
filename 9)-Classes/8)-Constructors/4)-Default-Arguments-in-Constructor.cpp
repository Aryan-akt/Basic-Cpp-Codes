// Default Arguments can be passed in member functions of classes.

#include <iostream>
using namespace std;

class data
{
    int a, b, c;

    public:
        void display()
        {
            cout << "The data are " << a << ", " << b << " and " << c << endl;
        }

        data(int, int, int);
    };

    data :: data(int x = 18, int y = 7, int z = 5)
    {
        a = x;
        b = y;
        c = z;
    }

int main() {

    data d1;
    d1.display();           // Displays the default arguments i.e. 18, 7, 5

    data d2(3);
    d2.display();           // Displays 3, 7, 5

    data d3(3, 2);
    d3.display();           // Displays 3, 2, 5

    data d4(3, 2, 6);
    d4.display();           // Displays 3, 2, 6

    return 0;
}