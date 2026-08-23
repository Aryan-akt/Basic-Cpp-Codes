#include <iostream>
using namespace std;

int main() {

    cout << "\nASSIGNMENT OPERATORS\n";
    cout << "int a = 10, b = 5" << endl;
    int a=10, b=5;

    cout << "\nARITHMETIC OPERATORS\n";
    cout << "The value of a+b is: " << a + b<<endl;
    cout << "The value of a-b is: " << a - b<<endl;
    cout << "The value of a*b is: " << a * b<<endl;
    cout << "The value of a/b is: " << a / b<<endl;
    cout << "The value of a%b is: " << a % b<<endl;
    cout << "The value of a++ is: " << a++<<endl;
    cout << "The value of a-- is: " << a--<<endl;
    cout << "The value of ++a is: " << ++a<<endl;
    cout << "The value of --a is: " << --a<<endl;
    cout << "The value of b++ is: " << b++<<endl;
    cout << "The value of b-- is: " << b--<<endl;
    cout << "The value of ++b is: " << ++b<<endl;
    cout << "The value of --b is: " << --b<<endl;

    cout << "\nCOMPARISON OPERATORS\n";
    cout << "The value of a==b is: " << (a == b)<<endl;
    cout << "The value of a!=b is: " << (a != b)<<endl;
    cout << "The value of a>b is: " << (a > b)<<endl;
    cout << "The value of a<b is: " << (a < b)<<endl;
    cout << "The value of a>=b is: " << (a >= b)<<endl;
    cout << "The value of a<=b is: " << (a <= b)<<endl;
    
    cout << "\nLOGICAL OPERATORS\n";
    cout << "The value of This Logical AND Operation ((a==b) && (a>b)) is: " << ((a==b) && (a>b))<<endl;
    cout << "The value of This Logical OR Operation ((a==b) || (a>b)) is: " << ((a==b) || (a>b))<<endl;
    cout << "The value of This Logical NOT Operation (!(a==b)) is: " << (!(a==b))<<endl;

    return 0;
}