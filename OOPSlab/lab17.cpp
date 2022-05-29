// Program to overload binary operator

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

    Distance operator+ (Distance const &obj)
    {
        Distance result;

        result.meters = meters + obj.meters;
        result.centimeters = centimeters + obj.centimeters;

        return result;
    }
};

int main()
{
    Distance d1(10, 5), d2(2, 4);
    Distance d3 = d1 + d2;
    d3.display();

    return 0;
}