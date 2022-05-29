// Create two classes DM and DB. DM stores the distance in meters and centimeters and DB stores the distance in feet and inches. Write a program to add object of DM with the object of DB class.

#include <iostream>
using namespace std;


// class dm to receive distance in meter and centimeter
class DM
{
public:
    int meters;
    int centimeters;

    DM(int m, int cm)
    {
        meters = m;
        centimeters = cm;

        while (centimeters > 99)
        {
            centimeters -= 100;
            meters++; 
        }
    }
   // A Display Function to display distance in meter and centimeter
    void display()
    {
        cout<<"Meters: "<<meters<<endl;
        cout<<"Centimeters: "<<centimeters<<endl;
    }
};
// class dm to receive distance in feet and inches
class DB
{
public:
    int feet;
    int inches;

    DB(int ft, int in)
    {
        feet = ft;
        inches = in;

        while (inches > 11)
        {
            inches -= 12;
            feet++;
        }
    }

    void display()
    {
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
};

DM add_DB_to_DM(DM a, DB b)
{
    DM result(a.meters, a.centimeters);

    result.meters += 0.3048*b.feet;
    result.centimeters += 2.54*b.inches;

    while (result.centimeters > 99)
    {
        result.centimeters -= 100;
        result.meters++; 
    }

    return result;
}

int main()
{
    DM obj1(9, 55);
    DB obj2(8, 10);

    obj1.display();
    obj2.display();

    DM result = add_DB_to_DM(obj1, obj2);
    result.display();

    return 0;
}