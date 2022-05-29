/* Create the class TIME to store time in hours and minutes .
Write a friend function to add two TIME objects..*/
#include <iostream>
using namespace std;

// class time is created with following  data members and member functions
class TIME
{
private:
//Data members - to store hours and minutes (of type integer).
    int hours;        
    int minutes;
    //A friend function to add 2 given objects of class TIME ..
    friend TIME add(TIME, TIME);

public:
    TIME(int hr = 0, int min = 0) /*A parameterized constructor with some default values to initialize 
    the data members */ 
    {
        hours = hr;
        minutes = min;
    }
    void print_time(void);  // A function to print the time (in format HH:MM)..
};

/*A friend function 'add' -takes 2 arguments of type object of TIME Class and adds them using their
data members,stores them in another temporary Object of TIME class 'temp' and finally returns it.*/
TIME add(TIME t1, TIME t2)
{
    TIME temp;
    temp.hours = t1.hours + t2.hours; /*Adds the 'hours' of both passed object (t1 and t2) and assigns it 
                                      to temp's datamember*/
    temp.minutes = t1.minutes + t2.minutes;  /*Adds the 'minutes' of both passed object 
                                             (t1 and t2) and assigns it;*/

    if (temp.minutes >= 60)    //Logic to compensate minutes overflow
    {
        temp.hours += temp.minutes / 60;
        temp.minutes = temp.minutes % 60;
    }

    return temp;
}
void TIME::print_time(void)  
{
    //Simply prints the 'hours' and 'minutes'; 
    cout << "HH:MM = " << hours << ":" << minutes << endl;
}

//Driver function.
int main(void)
{
    TIME t(4, 30);   //-time 4:30
    TIME t1(5, 30);  //-time 5:30
    t.print_time();
    t1.print_time();
    TIME t3;           //-time 0:0
    t3 = add(t, t1);   //  -time 10:00 (added time)
    t3.print_time();

    return 0;
}