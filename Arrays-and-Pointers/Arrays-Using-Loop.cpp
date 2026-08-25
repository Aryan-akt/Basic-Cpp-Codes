#include <iostream>
using namespace std;

int main() {
    
    int Marks[] = {79, 55, 61, 84, 93};
    
    // Using for loop
    for(int i = 0; i < 5; i++) {
        cout << "Marks of student number " << i + 1 << " is " << Marks[i] << endl;  
    }
    cout << endl;
    
    // Using while loop
    int i = 0;
    while(i < 5) {
        cout << "Marks of student number " << i + 1 << " is " << Marks[i] << endl;
        i++;
    }
    cout << endl;

    // Using do while loop
    i = 0;
    do {
        cout << "Marks of student number " << i + 1 << " is " << Marks[i] << endl;
        i++;
    } 
    while (i < 5);

    return 0;
}