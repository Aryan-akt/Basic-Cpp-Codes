// Runs top to bottom in a linear sequence
// Each line runs only once, no repetition, no branching

// Using Sequence Control Structure to calculate area of a rectangle

#include <iostream>
using namespace std;

int main() {

    float length;
    float breadth;
    
    cout << "Enter length of rectangle " << endl;
    cin >> length;
    
    cout << "Enter breadth of rectangle " << endl;
    cin >> breadth;
    
    float area = length * breadth;
    
    cout << "Area of the rectangle is " << area;

    return 0;
}