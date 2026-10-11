// "This" pointer is used when function argument and class members have same name.
// "This" is a pointer keyword which points to the object which invokes the member function.
// The below code wont show any errors but instead of required output 5, it will return a garbage value.

// #include <iostream>
// using namespace std;

// class A
// {
//     int a;
    
//     public:
//         void setData(int a)
//         {
//             a = a;               // HERE BOTH "a"'s ARE FUNCTION MEMBERS AND NOT CLASS MEMBERS AS THEY HAVE HIGHER PRIORITY.
//         }

//         void getData()
//         {
//             cout << "The value of a is " << a << endl;
//         }
// };

// int main()
// {
//     A a;
//     a.setData(5);
//     a.getData();

//     return 0;
// }

// The correct code will be as follows :-

#include <iostream>
using namespace std;

class A
{
    int a;
    
    public:
        void setData(int a)
        {
            this->a = a;
        }

        void getData()
        {
            cout << "The value of a is " << a << endl;
        }
};

int main()
{
    A a;
    a.setData(5);
    a.getData();

    return 0;
}