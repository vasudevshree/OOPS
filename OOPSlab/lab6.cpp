#include<iostream>
#include<string.h>

using namespace std;

class String{
	
	char name[50];
	public:
		
	void read()
	{
	 cout<<"Enter string : "<<"\n" ;
	 cin.getline(name ,50);	
	}
	
	void display()
	{
		cout.write(name,strlen(name));
	}
	
	void Concate(String , String );
	void Compare(String , String );
    
};

void String ::Concate(String a , String b)
{
cout.write(a.name,strlen(a.name)).write(b.name,strlen(b.name));

}

void String :: Compare(String a , String b)
{
	int count;
	
	count = strcmp(a.name,b.name);
	
	if(!count){
		cout<<"Strings are equal"<<"\n";
	}
	else{
		cout<<"Strings are not equal"<<"\n";
	}
}

int main()
{ 
	String s1,s2,s3;
	s1.read();
	s2.read();
    s3.Compare(s1,s2);
	s3.Concate(s1,s2);
}