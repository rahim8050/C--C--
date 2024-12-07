#include <iostream>
using namespace std;
class cylinder
{
	private:
		float height,radius;
		float area;
		public:

		
			void getinput ()
			{
				cout <<"enter radius\n";
				cin >>radius;
				cout <<"enter height\n";
				cin>>height;
							
			}
		
			
	   	   	friend float getvolume(cylinder c);
};
float getvolume(cylinder c)
{
return 3.14*c.radius*c.radius*c.height;				
}
int main()
{
	cylinder a,b;
	a.getinput();
b.getinput();
cout<<"the volume is\t"get volume(b)<<endl;
	cout<<"the volume is\t"<<getvolume(a)<<endl;
	return 0;
}
	