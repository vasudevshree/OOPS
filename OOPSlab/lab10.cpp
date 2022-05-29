/*
    Programs to demonstrate the concept of:
        a) Default Constructor
        b) Parametrized Constructor
        c) Copy Constructor
        d) Constructor Overloading
*/
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Default Constructor
    Point()
    {
        x = 0;
        y = 0;
        cout<<"The variables are initialized as 0\n";
    }

    // Parametrized Constructor
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    // Copy Constructor
    Point(const Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }

    // Display function
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main()
{
    Point p1;
    p1.display();

    Point p2(2, 3);
    p2.display();

    Point p3;
    p3.display();

    p3 = p2;
    p3.display();

    return 0;
}