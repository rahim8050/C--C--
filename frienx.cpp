#include <iostream>
using namespace std;
class pallelogram
{
	private:
		float l,w,area;
		public:
			void getinput()
{
	cout<<"enter the l\n";
	cin>>l;
	cout<<"enter the w\n";
	cin>>w;
}
		//	void show(void);
			friend float getarea(pallelogram a);
};

//void pallelogram::show()
//{
	
//}
float getarea(pallelogram a)
{
	return a.l*a.w;
}
int main ()
{
	pallelogram s;
	s.getinput();
//	s.show();
//	s.getarea();
	cout<<"the area is area;"<<getarea(s);
	return 0;
}
