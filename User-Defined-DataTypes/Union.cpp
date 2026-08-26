// Unions are used to save memory by letting multiple variables share the same memory location.

#include <iostream>
using namespace std;

typedef union Account_Value {

    int Account_Views;              // 4 bytes
    char Account_Rank;              // 1 byte              // Even though total memory is 9 bytes, Union takes only 4 bytes of memory
    float Account_Watchtime;        // 4 bytes             // which is the highest memory allocation required in this case.

} av ;

int main() {

    av Youtube;

    Youtube.Account_Rank = 'S';
    Youtube.Account_Watchtime = 2000;
    
    cout << Youtube.Account_Watchtime << endl;      // This gives correct output
    cout << Youtube.Account_Rank;                   // This will give garbage value as output, because Watchtime was defined
    cout << endl;                                   // after Rank and now Watchtime is taking up those 4 bytes of memory

    Youtube.Account_Views = 3200000;

    cout << Youtube.Account_Views;                  // After this, Views takes up those 4 bytes and deletes Watchtime data.

    return 0;
}