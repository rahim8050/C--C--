#include <iostream>
using namespace std;
class polgon
{
private:
		int height,width,area;
		public:
			void getval(void);
			void display (void);
			void getarea(void);			
};
void polgon :: getval(void)
{
	cout<<"enter width\n";
	cin>>width;
		cout<<"enter length\n";
	cin>>height;	
}

void polgon::getarea(void)
{
	area=height*width;
}
void polgon::display(void)
{
	cout<<"the area is\n "<<area;
}
class rect : public polgon
{
public:	
void getval(void);
	void getarea(void);
	void display (void);	
}; 
class triangle : public polgon

{
	int base;
	public:
	void getarea(void);
	void getval(void);
void display (void);
cout<< "enter the base\n";
cin>>base;
Area=0.5*base*height;
cout<<"the area is\n";

	
};
int main ()
{
	polgon c;
	c.getval();
	c.getarea();
	c.display();
	rect p;
	p.getval();
	p.getarea();
	p.display();
	triangle w;
	w.getval();
	w.getarea();
     w.display();
	
	
	return 0;
}