// An array is a collection of similar objects that allows skilled storage and access to multiple values.
// An array is a simple and convenient way to store and access multiple values.

#include <iostream>
using namespace std;

int main() {
   
    int Science_Marks[5] = {90, 85, 78, 92, 88};        // 'int Marks[]' also works

    int Math_Marks[5];      // Arrays can also be defined like this
    Math_Marks[0] = 81;
    Math_Marks[1] = 65;
    Math_Marks[2] = 36;
    Math_Marks[3] = 49;
    Math_Marks[4] = 94;

    cout << "Marks in Science of student 1: " << Science_Marks[0] << endl;
    cout << "Marks in Science of student 2: " << Science_Marks[1] << endl;
    cout << "Marks in Science of student 3: " << Science_Marks[2] << endl;
    cout << "Marks in Science of student 4: " << Science_Marks[3] << endl;
    cout << "Marks in Science of student 5: " << Science_Marks[4] << endl << endl;
    
    Math_Marks[4] = 84;     // Values in an Array can be changed
    cout << "Marks in Maths of student 1: " << Math_Marks[0] << endl;
    cout << "Marks in Maths of student 2: " << Math_Marks[1] << endl;
    cout << "Marks in Maths of student 3: " << Math_Marks[2] << endl;
    cout << "Marks in Maths of student 4: " << Math_Marks[3] << endl;
    cout << "Marks in Maths of student 5: " << Math_Marks[4] << endl;

    return 0;
}