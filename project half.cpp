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
					public:
					void getinput();
				//	void getceo();
					void show();
			};
			void ceo::getinput()
			{
				worker::getinput();
				cout<<"enter the number of workers under ceo\n";
				cin>>now;
			cout<<"enter the numbers of managers under ceo\n";
				cin>>nom;
			}
		//	void ceo::getceo()
		//	{
				
		//	}
			
			void ceo::show()
			{
				worker::getinput();
			
				cout<<"the numbers of workers is\n"<<now;
				cout <<"the numbers of managers is\n"<<nom;
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
				

			}
			void manager::show()
			{
				worker::show();
			
			}
			class regularstaff:public worker
			{
				private:
					char name[23],department[45];
					int age,yearofservice;
					public:
						void getinput();
						void show();
						
			};
			void regularstaff::getinput()
			{
				worker::getinput();
				
				cout<<"enter the department\n";
				cin>>department;
				
				cout<<"enter the yearofservice\n";
				cin>>yearofservice;
			}
			void regularstaff::show()
			{
				worker::show();
					cout<<"the department is\n"<<department;
							cout<<"the year of service is\n"<<yearofservice;
			}
			class cashier:public worker
			{
				private:
					char name[32],section[21];
					int age;
					public:
					void getinput();
					void show();
			};
			void cashier::getinput()
			{
				worker::getinput();
				cout<<"enter the section\n";
				cin>>section;
			
				
			}
			void cashier::show()
			{
				//keita Mundibo
				worker::show();
				
				cout<<"the section of the cashier is\n"<<section;
				
			}
			class accountant:public worker
			{
				private:
					char name[23],section[54];
					int age;
					public:
						void getinput();
						void show();
			};
			void accountant::getinput()
			{
				
				cout<<"enter the section\n";
				cin>>section;
				// chinua chinebe
				
			}
			void accountant::show()
			{
				worker::show();
			
				cout<<"the section is\n"<<section;
				cout<<"the age is\n"<<age;
			}
			
int main ()
{
//	manager p;
//	p.getinput();
//	p.show();
	ceo m;
	m.getinput();
	m.show();
	accountant w;
	w.show();
	w.getinput();
	cashier a;
	a.getinput();
	a.show();
	manager q;
	q.getinput();
	q.show();
	return 0;
}