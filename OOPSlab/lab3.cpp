#include <iostream>
using namespace std;
class function {
    private :
            double result =1;
            
    public : 
            void display(double a){
                
                cout<<"\nCalculated Value is : "<<a;
            }
            void power(double base, int power)
            {
                
                result=1;
                for(int i=1; i<=power; i++)
                {
                    result = result * base;
                }
                cout<<"This is double power function \n";
                display(result);
            }
            void power(double base)
            {
                
                int power=2;
                //double result=1;
                result=1;
                for(int i=1;i<=power;i++){
                    result = result * base;
                }
                display(result);
            }
};

int main()
{
     int choice ;
    double base ;
    int powr;
    function pwr;
    cout<<"Enter the Choice : \n";
    cout<<"1.Value with power\n2.Value without power\n";
    cin>>choice;    
    switch(choice){
        case 1 :
                cout<<"Enter the base value and power value : ";
                cin>>base>>powr;
                pwr.power(base,powr);
                break;
        case 2 :
                cout<<"Enter the base value : ";
                cin>>base;
                pwr.power(base);
                break;
        default :
                exit(0);
    }

    return 0;
}