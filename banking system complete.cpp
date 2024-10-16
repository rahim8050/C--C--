#include <iostream>
using namespace std;
class bank 
{
		public:
		int current,ammountleft,balance,i,birthdate,currentyear,age;
		char name[30];
		char branch[15];
	int	pin;
		void getdata(void);
		void getpin (void);
		void calculateage(void);
		void showbalance(void);
		void display(void);
};
		void bank::getdata(void)
		{
			cout<<"BANK ACCONT DETAILS\n";
			
			for(i=0;i<=3;i++)
			{
				
			
				cout<<"************ BANK INFO ************************\n";
			}
		
			for (int  m=0;m<=3;m++)
			{
				cout<<":::::::::::NAME::::::::\n";
			}
				cout<<"enter name of the banker\n";
			cin>>name;
			
			for (int k=0;k<=4;k++)
			{
				cout<<"::::::::::BRANCH:::::::::::::::\n";
			}
			cout<<"enter the branch\n";
			cin>>branch;
			for (int n=0;n<=3;n++)
			{
				cout<<"**********:::::::::BIRTH DAY:::::::::*********\n";
			}
			cout<<"enter the year you were born in\n";
			cin>>birthdate;
			cout <<"enter the currenyear\n";
			cin>>currentyear;
			cout<<"enter the current to withdraw\n";
			cin>>current;
				cout<<"enter your pin\n";
			cin>> pin;
			cout<<"enter the balance\n";
			cin>>balance;
			
		}
		void bank::getpin (void)
		{
		cout <<"enter your pin\n";
		cin>>pin;
			if (pin=1234)
			{
				cout<< "correct pin eligible for loan\n";
			}
			else
			{
				cout <<"invalid pin not eligible for loan\n";
			}
		}
void bank::showbalance (void)
	{
		ammountleft=balance-current;
	
	
}
void bank::calculateage(void)
{
	age=currentyear-birthdate;
		if (age>=18)
	{
		cout<<"you are eligble for loan\n";
	}
	else
	{
		cout<<"you are not legible for a loan\n";
	}
}
void bank::display(void)
{
	cout<<"the name is:"<<name<< "\n";
	cout<<"the current is:"<<current<< "\n";
	cout<<"the balance is:"<<balance<< "\n";
	cout<<"the ammount left is:"<<ammountleft<< "\n";
	cout<<"your age is:"<<age<< "\n";
	cout << "your branch is " <<branch<< "\n";
	cout << "the current year is " <<currentyear<< "\n";
	cout << "the year of birth is "<<birthdate<<"\n";
		cout << "the   pin is "<<pin<<"\n";

	
	
}
int main ()
{
	bank p;
	p.getdata();
	p.showbalance();
	p.calculateage();
	p.display();
	return 0;
}