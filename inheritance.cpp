#include <iostream>
using namespace std;
class polgon
{

		
		public:
			double height,width,result;
			void getval(void);
			void display (void);
					
};
void polgon :: getval(void)
{
	cout<<"enter width\n";
	cin>>width;
		cout<<"enter length\n";
	cin>>height;	
}
void polgon ::display ( )
{
cout <<"the area is :\n"<<result;
}
class rect : public polgon
{
public:
		
void getval(void);
	int getarea()
	{
		//int result;
		result=height*width;
		return result;
		//cout<<"the area is \n"<< result; 
	}
	
};
void rect::getval()
{
	polgon::getval();
} 
class triangle : public polgon
{
	
public:
	
	void getval();
    int Area()
	{
		//int result;
		result= 0.5*height*width;
		return result;
		//cout<<"the area is \n"<< result; 
	}	
};
void triangle::getval()
{
polgon::getval();
}
int main ()
{
	

	rect p;
	p.getval();
	p.getarea();
	p.display();

	triangle w;
	w.getval();
	w.Area();
	w.display();
	return 0;
}