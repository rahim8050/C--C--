#include <iostream>
using namespace std;
class triangle
{
	private:
	float  a,area,circ;
	public:
	float length;
	void printresults (void);
		void setA(float length)
		{
			a=length;
		circ=a*3;
		area=(1.73*a*a)/4;
		}
	
	friend void printresults (triangle);
};

void printresults (triangle b) 
{
cout<<"circ is "<<b.circ;
cout<<"area is"<<b.area;
}
int main ()
{
triangle b;
b.setA(3);
printresults(b);
}