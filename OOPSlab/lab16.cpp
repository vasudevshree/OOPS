// Program to overload unary operator

#include <iostream>
using namespace std;

class Distance
{
private:
    int meters, centimeters;

public:
    Distance()
    {
        meters = 0;
        centimeters = 0;
    }

    Distance(int m, int cm)
    {
        meters = m;
        centimeters = cm;
    }

    // Displays Distance
    void display()
    {
        cout<<meters<<" m "<<centimeters<<" cm"<<endl;
    }

    Distance operator- ()
    {
        meters = -meters;
        centimeters = -centimeters;
        
        return Distance(meters, centimeters);
    }
};

int main()
{
    Distance d1(10, 15), d2(6, 2);

    -d1;
    d1.display();

    -d2;
    d2.display();

    return 0;
}