/*write a program to create an abstract class named Shape that contains an empty method named number of sides()
.Provided three class named Trapeziod , Triangle , and Hexagon such that each of the classes inherit the class
shape Each of the class contain the only method number of sides() that shows the number of sides in the given
geometrical figures.*/

#include <iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;

class Shape
{
public:
    void no_of_sides(void); // Empty method 'no_of_sides()' of class Shape;
};

// class 'Trapezoid' is a class which is publicly derived from the base class 'Shape';
class Trapeziod : public Shape
{
public:
    void no_of_sides() // class trapezoid inherits the function of its base class i.e class Shape;
    {
        // Defination of 'no_of_sides()' method for Trapezoid class.
        cout << "No of sides of Trapezoid is " << 4 << endl;
    }
};

// class 'Triangle' is a class which is publicly derived from the base class 'Shape';
class Triangle : public Shape
{
public:
    void no_of_sides() // class Triangle inherits the function of its base class i.e class Shape;
    {
        // Defination of 'no_of_sides()' method for Triangle class.
        cout << "No of sides of Triangle is " << 3 << endl;
    }
};

// class 'Hexagon' is a class which is publicly derived from the base class 'Shape';
class Hexagon : public Shape
{
public:
    void no_of_sides() // class Hexagon inherits the function of its base class i.e class Shape;
    {
        // Defination of 'no_of_sides()' method for Hexagon class.
        cout << "No of sides of Hexagon is " << 6 << endl;
    }
};

// Driver function..
int main(void)
{
    Trapeziod tz;
    tz.no_of_sides(); // no_of_sides for trapezoid;
    Triangle tg;
    tg.no_of_sides(); // no_of_sides for triangle;
    Hexagon hx;
    hx.no_of_sides(); // no_of_sides for hexagon;
    getch();

    return 0;
}