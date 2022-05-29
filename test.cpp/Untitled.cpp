#include <iostream>
using namespace std;
int  differ()  //function overloading
{
    int x,y,z;
    cout<<"Enter the value of x : \n";
    x=23;
    cout<<"Enter the value of y : \n";
    y=90;
    z=x-y;
    cout<<"The value of x - y is "<<z<<endl;
    return x-y;
}
void differ(int a)
{
    cout<<a<<endl;
}
void differ(int a ,int b)
{
    cout<<a-b;
}
int square(int a)
{
    return (a*a);
}
int sum(int a,int b)
{
    return(a+b);
}
string print(string st)
{
    cout<<st;
    return st;
}
string addstring(string st1 , string st2)
{
    string z;
    z=st1+st2;
    cout<<z;
    return z;
}
int main()
{
   differ(3);
   differ();
   differ(2,4);
   cout<<endl;
   cout<<sum(3,5)<<endl;
   cout<<square(24);
   cout<<endl;
   print("Hello How are you doing today\n");
   //
   string st1 = "Vasudev ";
   string st2= "Shree";
   cout<<st1+st2;
   cout<<endl;
   addstring(st1,st2);



    return 0;
}
