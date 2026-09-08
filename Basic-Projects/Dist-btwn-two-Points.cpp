// Finding the distance between two points on a 2D plane and 3D space.

#include <iostream>
#include <math.h>           // Used to take square root and numerous other mathematical operations.
using namespace std;

class point
{
    int x, y, z;
    friend int dist2D(point, point);
    friend int dist3D(point, point);

    public:
        point(int, int);
        point(int, int, int);

        void displayCords()
        {
            static int n = 1;
            cout << "The co-ordinates of point " << n << " is " << "(" << x << ", " << y << ")" << endl;
            n++;
        }
};

point :: point(int a, int b)
{
    x = a;
    y = b;
}

point :: point(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

int dist2D(point o1, point o2)
{
    int d = (o1.x - o2.x)*(o1.x - o2.x) + (o1.y - o2.y)*(o1.y - o2.y);

    return sqrt(d);          // "sqrt" comes from "math.h"
}

int dist3D(point o1, point o2)
{
    int d = (o1.x - o2.x)*(o1.x - o2.x) + (o1.y - o2.y)*(o1.y - o2.y) + (o1.z - o2.z)*(o1.z - o2.z);

    return sqrt(d);
}

int main() {

    // Distance between two points in a 2D plane.
    int inputa, inputb;
    static int m = 1;

    cout << "Enter the x co-ordinate of point number " << m << endl;
    cin >> inputa;
    cout << "Enter the y co-ordinate of point number " << m << endl;
    cin >> inputb;
    m++;

    point p1(inputa, inputb);

    cout << "Enter the x co-ordinate of point number " << m << endl;
    cin >> inputa;
    cout << "Enter the y co-ordinate of point number " << m << endl;
    cin >> inputb;
    m++;

    point p2(inputa, inputb);

    cout << "The distance between these points in 2D plane is " << dist2D(p1, p2) << endl;

    // Distance between two points in a 3D space.
    int inputc;

    cout << "Enter the x co-ordinate of point number " << m << endl;
    cin >> inputa;
    cout << "Enter the y co-ordinate of point number " << m << endl;
    cin >> inputb;
    cout << "Enter the z co-ordinate of point number " << m << endl;
    cin >> inputc;
    m++;

    point p3(inputa, inputb, inputc);

    cout << "Enter the x co-ordinate of point number " << m << endl;
    cin >> inputa;
    cout << "Enter the y co-ordinate of point number " << m << endl;
    cin >> inputb;
    cout << "Enter the z co-ordinate of point number " << m << endl;
    cin >> inputc;
    m++;

    point p4(inputa, inputb, inputc);

    cout << "The distance between these points in 3D space is " << dist3D(p3,p4) << endl;

    return 0;
}