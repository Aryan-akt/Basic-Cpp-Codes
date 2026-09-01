#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

    public:
        void SetID(void)
        {
            static int n;
            cout << "Enter ID of Employee number " << n + 1 << endl;
            cin >> id;
            n++;
        }

        void DisplayID(void)
        {
            static int n;
            cout << "The ID of Employee number " << n + 1 << " is " << id << endl;
            n++;
        }

};

int main() {

    Employee Office[5];         // This is an Array of object 'Office'.

    for(int i = 0; i < 5; i++)
    {
        Office[i].SetID();
    }

    for(int i = 0; i < 5; i++)
    {
        Office[i].DisplayID();
    }

    return 0;
}