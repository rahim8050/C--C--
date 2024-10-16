#include <iostream>
using namespace std;
class name
{
	public:
		char name[30];
		//char classes;
		int age;
		void getdata();
		void display ();
};
void name::getdata()
{
	cout<<"enter your name\n";
	cin>>name;
	cout<<"enter age\n";
	cin>>age;
}
void name::display()
{
	cout<<"the name is\n"<<name;
	cout<<"the age is\n"<<age;
	cout<<"the class is\n"<<classes;
}
class student:public name
{
	public:
		char classic[30];
		void getdata();
		void getclass ()
		{
		cout<<"enter your class stream\n";
			cin>>classic;
		};
		void student :: getdata ()
		{
			name :: getdata ();
		}

int main ()
{
	student s;
	s.getdata();
	//s.getclass();
	s.display();
	return 0;
}

