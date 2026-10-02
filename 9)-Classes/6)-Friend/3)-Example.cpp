#include <iostream>
using namespace std;

class Y;            // The code would show error if "class Y" wasnt declared here because...

class X
{
    int a;
    friend void swapData(X &, Y &);         // ...compiler would not understand what class is "Y &" reffering to in this line.

    public:
        void setData(int p)
        {
            a = p;
        }

        void displayData()
        {
            cout << a << endl;
        }
};

class Y
{
    int b;
    friend void swapData(X &, Y &);

    public:
        void setData(int q)
        {
            b = q;
        }

        void displayData()
        {
            cout << b << endl;
        }
};

void swapData(X & o1 , Y & o2)          // Swaping using Reference Variables
{
    int t = o1.a;
    o1.a = o2.b;
    o2.b = t;
}

int main() {

    X x1;
    Y y1;

    x1.setData(89);
    y1.setData(67);
    cout << "The value of x1 and y1 is " << endl;
    x1.displayData();
    y1.displayData();
    
    swapData(x1, y1);
    
    cout << "The swappes value of x1 and y1 is " << endl;
    x1.displayData();
    y1.displayData();

    return 0;
}