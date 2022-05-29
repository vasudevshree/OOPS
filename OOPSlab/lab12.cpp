// A program to show multiple inheritence..
#include <iostream>
#include <stdio.h>
using namespace std;

//Base class 'student'; to have all the details of a student
class student 
{
protected:     //protected data members - to store name ,roll number and marks of different subjects;
    char name[25]; 
    int rno, Phy, chem, math;

public:
    //A member function to get the details such as name ,roll no, marks;
    void get(void)
    {
        cout<<"Enter student Name :";
        cin>>name;
        cout << "Enter the Roll no :";
        cin >> rno;
        cout << "Enter the marks of physics,chemistry and maths :";
        cin >> Phy >> chem >> math;
    }
};

// Another base class 'sports' to have sports performance of a student;
class sports
{
protected:
    int sports; // -- Sports mark
public:
    void getsm(void)  //Function to input sports marks;
    {
        cout << "Enter the sports mark :";
        cin >> sports;
    }
};

// A derived class 'statement' which is publicly derived from 2 base class -'student' and 'sports';
class statement : public student, public sports
{
    // Private datamembers of statement class;
    int total;   //to store total marks(subjects marks + sports marks)
    float avg;  //to store average;

public:
    //A member function to display the student statement ;
    void display(void)
    {
        //protected datamembers of parent classes'student' and 'sports' are acessible;
        total = (Phy + chem + math + sports);  
        avg = total / 4.00;
        cout << "\n\tName       : " << name;
        cout << "\n\tRoll No    : " << rno << "\n\tTotal      : " << total;
        cout << "\n\tAverage    : " << avg;
    }
};

//Driver function..
int main(void)
{
    statement st;  //object of statement class (derived one) is created ;
    st.get(); //member function of parent class (student) is called;
    st.getsm();  //member function of parent class (sports) is called;
    st.display();  //own class member function is called; 
    return 0;
}