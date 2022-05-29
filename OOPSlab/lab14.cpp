// A program to show hybrid inheritence in c++;
#include <iostream>
using namespace std;

class Car
{
protected: //Data members 
    float mileage;
    int weight;
    float max_speed;
    string type;

public:
    void get_milage(int distance /*in metres*/) //a function to take mileage of a car as input
    {
        mileage = distance;
    }
    void getWeight(int wt /*in kiloGrams*/) //a function to take weight of a car as input
    {
        weight = wt;
    }
    void displaycar(void) //A display function to display all the car details;
    {
        cout << "Type of car : " << type << endl;
        cout << "Max speed : " << max_speed << " Kmph" << endl;
        cout << "Mileage : " << mileage << " km per unit" << endl;
        cout << "Net Weight : " << weight << " KiloGrams" << endl;
    }
};

class Petrol : public Car   // class Petrol which is derived from class Car
{
public:
    Petrol()  //Default constructor of Petrol
    {
        max_speed = 0;
    }
    void getMaxspeed(int speed /*in kmph*/) //a member function to take speed of a petrol car as input
    {
        max_speed = speed;
    }
};
class Electric : public Car  // class Electric which is derived from class Car
{
public:
    Electric()  //Default constructor of Electric
    {
        max_speed = 0;
    }
    void getMaxspeed(int speed /*in kmph*/) //a member function to take speed of an electric car as input
    {
        max_speed = speed;
    }
};

class Tesla : public Electric //class Tesla which an electric car ;
{
public:
    Tesla()  //Default constructor 
    {  /*It inherits all the properties of Electric class and Electric class inherits all the properties
       of Car class;*/
        type = "Electric";
        mileage = 50;
        max_speed = 480;
        weight = 400;
    }
};
class Ferrari: public Petrol //class Ferrari which is a petrol car ;
{
public:
    Ferrari()  //Default constructor
    {  /*It inherits all the properties of Petrol class and Petrol class inherits all the properties
       of Car class;*/
        type = "Petrol";
        mileage = 60;
        max_speed = 580;
        weight = 450;
    }
};

class Bmw : public Petrol,public Electric //class Bmw which is a hybrid car i.e. both petrol and electric;
{
    public:
    Bmw()  //Default constructor
    {   /*In order to solve the ambiguity due to the use of same data member of class Car through both 
    class Petrol and Electric,so any one of them is used (petrol) using scope resolution operator (::) */
        Petrol::type="Hybrid";  
        Petrol::max_speed=203;
        Petrol::mileage=30;
        Petrol::weight=670;
    }
    void getMaxspeed(int speed /*in kmph*/) 
    { /* The function uses Petrol class getMaxspeed function to remove ambiguity*/
        Petrol::getMaxspeed(speed); 
    }
     void displaycar(void)
    {/* The function uses Petrol class displaycar function to remove ambiguity*/
        Petrol::displaycar();
    }
    void get_milage(int distance /*in metres*/)
    { /* The function uses Petrol class get_milage function to remove ambiguity*/
        Petrol::get_milage(distance);
    }
    void getWeight(int wt /*in kiloGrams*/)
    { /* The function uses Petrol class getWeight function to remove ambiguity*/
        Petrol::getWeight(wt);
    }
};
void br()  //thematic break
{
    cout<<".................................."<<endl;
}
int main(void)
{
    Tesla t;  //object of tesla class is created
    t.displaycar();  //inherited displaycar() is called.
    br();  //thematic break
    Ferrari fer;  //object of Ferrari class is created
    fer.displaycar();  //inherited displaycar() is called.
    br();
    Bmw b;  //object of Bmw class is created
    b.get_milage(130);
    b.getMaxspeed(670);
    b.getWeight(450);
    b.displaycar(); //inherited displaycar() is called.

    return 0;
}