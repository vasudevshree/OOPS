//A program to show the concept of containership..
#include <iostream>
using namespace std;

class Result 
{
    protected:
    int marks[4];    //data member - to store the marks of 4 subjects
public:
    void input(void);  //member function to get marks input from the user
    void show(void); //Member function to show the Marks and details in output screen; 
};

void Result::input(void)
{
    cout<<"Enter the marks of Physics,Chemistry,Mathematics,Biology : \n";
    for (int i = 0; i < 4; i++)
    {
        cin>>marks[i];
    }
    
}
void Result::show(void)
{
    int m=0;   //temporary variable;
    for (int i = 0; i < 4; i++)  // Adding  the stored marks and storing it in temporary variable m;
    {
        m+=marks[i];
    }
    cout<<"Total Marks : "<<m;  //displays total marks
    cout<<"\nAverage Marks : "<<m/4.0;   //displays the average mark
    
}

class Student
{
    int rollno;
    string name;
    Result res;  // The object of class Result is used in this class -(containership)
    public:
    void input(void); 
    void show(void);
};

void Student::input(void)
{
    cout<<"Enter Roll number : ";
    cin>>rollno;
    cout<<"\nEnter Name : ";
    cin>>name; 
    cout<<endl;
    res.input();
}
void Student::show(void)
{
    cout<<"Student's Name : "<<name;
    cout<<"\nStudent's Roll number : "<<rollno;
    cout<<endl;
    res.show();
}
int main(void)
{
    Student s;
    s.input();
    s.show();

    return 0;
    
}