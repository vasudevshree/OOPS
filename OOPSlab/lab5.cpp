#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Account
{

  float balance;

public:

    Account ()
  {
    balance = 0;
  }

  float setbalance (float b);

  float withdraw (float b);

  void display (void);



  float calc_interest ();



};

float
Account::setbalance (float b)
{
  balance = balance + b;
  return balance;
}

float
Account::withdraw (float b)
{
  if (balance <= 0 || balance < b)
    {
      cout << "Insufficient balance unable to withdraw" << "\n";

    }
  else
    {

      balance = balance - b;
    }

  return balance;
}

void
Account::display (void)
{
  if (balance <= 0)
    {
      cout << "Insufficient balance " << endl;
    }
  else
    {

      cout << "Account balance : " << balance << "\tRs only" << endl;
    }
}

float
Account::calc_interest ()
{
  float r;
  int t;
  cout << "Enter rate of interest() and time period(in year) : " << "\n";
  cin >> r >> t;

  float ci = balance * pow ((1 + r / 100), t);

  return ci;
}



int
main ()
{
  Account a1;
  int choice;
  do
    {

      cout << "Welcome" << "\n";
      cout << "1. Deposit Money" << "\n";
      cout << "2. Withdraw Money" << "\n";
      cout << "3. Current Balance" << "\n";
      cout << "4. Calculate Interst " << "\n";

      cout << "5. Exit" << "\n";


      cout << "Enter your choice : " << endl;
      cin >> choice;



      switch (choice)
	{
	case 1:
	  {
	    float a;
	    cout << "Enter the amount you want to Deposit : ";
	    cin >> a;
	    a1.setbalance (a);
	    break;
	  }
	case 2:
	  {
	    int a;
	    cout << "Enter the amount you want to Withdraw :" << "\n";
	    cin >> a;
	    a1.withdraw (a);
	    break;
	  }

	case 3:
	  {
	    a1.display ();
	    break;
	  }

	case 4:
	  {

	    cout << "Interest = " << a1.calc_interest () << "\n";
	    break;
	  }

	case 5:
	  {
	    exit (0);
	    break;
	  }


	}


    }
  while (choice != 5);






  return 0;
}