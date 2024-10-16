#include <iostream>
using namespace std;
class Rectangle
{
	private:
	int length,width,area;
	public:
	void display(void);

	void setA (void)
	{
		cout<<"enter length\n";
		cin>>length;
			cout<<"enter width \n";
		cin>>width;
		area=length*width;
	}
		friend void display (Rectangle);
};
void display (Rectangle a)
{
	cout<<"the area is"<<a.area<<"\n";
}
int main ()
{
	Rectangle a;
	a.setA();
	display(a);
	return 0;
}