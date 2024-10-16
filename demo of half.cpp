#include <iostream>
using  namespace std;
class worker
{
	private:
		int age;
		char name[40];
		public:
			void getinput(void);
			void show(void);
			
};
void worker::getinput()
			{
cout <<"enter the worker's name\n";
				cin>>name;
				cout<<"enter  the worker's  age\n";
			cin>>age;	
			}
			void worker:: show()
			{
				cout <<"the name is \n"<<name;
				cout<<"the age is\n"<<age;
			}
			class ceo:public worker
			{
				private:
					char name[34];
					int age,now,nom;
					void getinput();
					void show();
			};
			void ceo::getinput()
			{
				worker::getinput();
				cout<<"enter the name of the ceo\n";
				cin>>name;
				cout<<"enter the ceo age\n";
				cin>>age;
			//*	cout<<"enter the number of workers under ceo\n";
			//	cin>>now;
			//	cout<<"enter the numbers of managers under ceo\n";
			//*	cin>>nom;
			}
			void ceo::show()
			{
				worker::getinput();
				cout<<"the name of ceo is\n"<<name;
				cout<<"the age of ceo is"<<age;
			//	cout<<"the numbers of workers is\n"<<now;
			//	cout <<"the numbers of managers is\n"<<nom;
			}
			class manager:public worker
			{
				private:
					char name [30];
					int age;
					public:
						void getinput(void);
						void show();
			};
			void manager::getinput()
			{
				worker::getinput();
				cout<<"enter manager name\n";
				cin>>name;
				cout<<"enter the manager age";
				cin>>age;

			}
			void manager::show()
			{
				worker::show();
				cout<<"the workers name is"<<name;
				cout<<"the worker age is"<<age;
			}
			
			
int main ()
{
	manager p;
	p.getinput();
	p.show();
	return 0;
}