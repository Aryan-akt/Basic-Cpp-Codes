// Check eligibility for driving and learners license using If-Else Control Structure.

// If Else Selection Structure Syntax

// if (condition1) {
//     code1 << endl;
// }
// else if (condition2) {
//     code2 << endl;
// }
// else {
//  code3 << endl;
// }

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if ((age < 16) && (age > 0)) {
        cout << "You are neither eligible for driving license nor learners license." << endl;
    } 
    else if ((age >= 16) && (age <18)){
        cout << "You are eligible for learners license." << endl;
    }
    else if (age >= 18 && age < 80) {
        cout << "You are eligible for driving license." << endl;
    } 
    else if (age >= 80){
        cout << "You are eligible for driving license, but please be cautious." << endl;
    }
    else {
        cout << "Invalid age entered." << endl;
    } 
    
    return 0;
}