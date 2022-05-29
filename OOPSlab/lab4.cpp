#include <iostream>
using namespace std;

// A class named Power that contains all the neccesary functions

class Power
{
public:

    // Two constructors of the Power class that implements the concept of funtion overloading

    Power(int m)
    {
        const int n = 2;
        double result = calcPower(m, n);
        display(result);
    }

    Power(int m, int n)
    {
        double result = calcPower(m, n);
        display(result);
    }

    // To not repeat the same code, two functions that calculate the power and display result are made.
    
    double calcPower(int m, int n)
    {
        double result=1;
        for (int i = 1; i <= n; i++)
        {
            result *= m;
        }

        return result;        
    }

    void display(double num)
    {
        cout<<"The result is: "<<num<<endl;
    }
};

int main()
{
    Power(2, 6);

    return 0;
}