#include <iostream>
using namespace std;
class shapes
{
private:
	int length,width,area,perimeter;
	public:
		void getinput(void);
		void getarea(void);
		void getperimeter(void);
		void display(void);
			
};
void shapes::getinput(void)
{
	cout<<"enter length";
	cin>>length;
	cout<<"enter width";
	cin>>width;
}
void shapes::getarea (void)
{
	area=length*width;
}

void shapes::getperimeter (void)
{
	perimeter=2*length+2*width;
}
void shapes::display (void)
{
	cout<<"the area is"<<area<< "\n";
	cout<<"the perimeter is"<<perimeter<< "\n";

}
int main ()
{
	shapes rect1;
	rect1.getinput();
	rect1.getarea();
	rect1.getperimeter();
	rect1.display();
	return 0;
	
}
