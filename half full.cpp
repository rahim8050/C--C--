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
			class manager:public worker
			{
				private:
					char name[45];
					int age,now;
					public:
					void getinput(void);
					void show(void);		
			};
			void manager::getinput()
			{
				worker::getinput();
				cout<<"enter the now\n";
				cin>>now;
			}
			void manager::show()
			{
				worker::show();
				cout<<"the now is"<<now;
			}
			class ceo:public worker
			{
				private:
					int age,nom;
					char name[32];
					public:
						void getinput();
						void show();
						
			};
			void ceo::getinput()
			{
				worker::getinput();
				cout<<"enter the number of managers under ceo\n";
				cin>>nom;
			}
			void ceo::show()
			{
				worker::show();
				cout<<"the number of managers under ceo are"<<nom;
			}
			class regularstaff:public worker
			{
				private:
					char name[40],section [34];
					int age,hrswrkg;
					public:
						void getinput();
						void show();
			};
			void regularstaff::getinput()
			{
				worker::getinput();
				cout<<"enter the section the regular staff belong\n";
				cin>>section;
				cout<<"enter the hours worked by the regular staff\n";
				cin>>hrswrkg;
			}
			void regularstaff::show()
			{
				worker::show();
				cout<<"the section worked by the staff is\n"<<section;
				cout<<"the hours worked by the staff are"<<hrswrkg;
			}
			int main ()
			{
				manager p;
				p.getinput();
				p.show();
					ceo o;
				o.getinput();
				o.show();
					regularstaff x;
				x.getinput();
				x.show();
				return 0;
			}