#include<iostream>
using namespace std;
class integer
{
int m,n;
public:
integer(int,int);
void display(void)
{
cout<<"m=:"<<m;
cout<<"n="<<n;
}
void getdata(void)
{
	cout<<"enter the value of m\n";
	cin>>m;
	cout<<"enter the value of \n";
	cin>>n;
}
};
integer :: integer( int x,int y) // constructor defined
{
m=x;
n=y;
}
int main( )
{
integer int1,int2;// implicit call
int1.getdata();
int2.getdata();
cout<<" \nobjectl "<<endl;
int1.display( );
cout<<" \n object2 "<<endl;
int2.display( );
return 0;
}