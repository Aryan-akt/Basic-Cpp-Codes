// Nesting is the practice of calling one function inside another function definition.
// Whenever that function is run the function nesting inside it is also automatically triggered.

#include <iostream>
#include <string>
using namespace std;

class binary
{

    private:
        string a;
        void check(void);

    public:
        void read(void);        // These are function prototypes.
        void swap01(void);
        void display(void);
};

void binary :: read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> a;

    check();        // (Nesting) This will automatically run 'check()' function whenever 'read()' function is run. 
}

void binary :: check(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '1' && a.at(i) != '0')
        {
            cout << "Incorrect binary format entered." << endl;
            exit(0);
        }
    }
}

void binary :: swap01(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '1')
        {
            a.at(i) = '0';
        }
        else
        {
            a.at(i) = '1';
        }
    }

}

void binary :: display()
{
    cout << "Your binary number is ";
        // for (int i = 0; i < a.length(); i++)
        // {
        //     cout << a.at(i);
        // }
        // cout << endl;

        // OR SIMPLY

        cout << a << endl;
}

int main()
{

    binary b;

    b.read();
    // b.check();       // This will show an error because 'check()' function is private.
    b.display();
    b.swap01();
    b.display();

    return 0;
}