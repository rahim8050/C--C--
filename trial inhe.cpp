#include <iostream>
using namespace std;
class inputs
{
	public:
		double width,height,result;
		void getval ();
		void display ();
};
void inputs :: getval()
{
	cout <<"enter the height\n";
	cin>>height;
		cout <<"enter the width\n";
	cin>>width;
}
void inputs ::display(void)
{
	cout<<"the result is "<<result;
}
class triangle : public inputs
{
	public:
	void getval();
	int area()
	{
		result =0.5*height*width;
		return  result;
	}
};
void triangle::getval()
{
	inputs::getval();
}

int main ()
{
	triangle x;
	x.getval();
	x.area();
	x.display();
	return 0;
}