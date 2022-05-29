// A program to demonstrate the concept of multilevel inheritance;
#include <iostream>

using namespace std;
class GrandFather    //Class Grandfather 1st (Base) class in multilevel inheritance;
{
    //Datamember --to store age and skillset of Gtrandfather;
    int grandfatherAge;
    string skillSet;

public:
    GrandFather() //A default constructor to set some default values
    {
        skillSet = "Playing Guitar";
        grandfatherAge = 75;
    }
    void displaySkill(void) //A display function to display the skillset (of grandfather).
    {
        cout << skillSet;
    }
};

class Father : public GrandFather //A class Father derived publicly from Grandfather; 
{
    string skillSet;   //Datamember --to store age and skillset of father;
    int fatherAge;

public:
    Father() //A default constructor to set some default values
    {
        skillSet = "Shooting Arrows";
        fatherAge = 51;
    }
    void displaySkill(void) /*A display function to display all the skillset 
     of father -that includes his own skill as well as the inherited skill from his father(Grandfather);*/
    {
        GrandFather::displaySkill();  /*accessing the Grandfather's displaySkill function using 
        the (::) scope resolution operator;*/ 
        cout << endl
             << skillSet << endl;  //His own skill (father's skill)
    }
};

class Son : public Father  //A class Father derived publicly from Father;
{
    int sonAge;   //Datamember --to store age and skillset of Son;
    string skillSet;

public:
    Son() //A default constructor to set some default values
    {
        sonAge = 17;
    }
    Son(string st) //A parameterized constructor 
    {
        skillSet = st;
    }
    void displaySkill(void)/*A display function to display all the skillset 
     of son -that includes his own skill as well as the inherited skill from his father(Grandfather);*/
    {
        cout << "Inherited skill of son is : \n";
        Father::displaySkill();  /*accessing the Father's displaySkill function using 
        the (::) scope resolution operator;*/
        cout << skillSet;  //His own skill (Son's skill)
    }
};

int main(void)
{
    Son s("Swimming"); //passing a son's skill using constructor; 
    s.displaySkill(); //calls the displaySkill() of Son class

    return 0;
}