
#include<iostream>
using namespace std;
class class2;
class class1
{
int value1;
public:
void indata(){
	cout<<"enter value1\n";
	cin>>value1;
}
void display(void) {cout<<"value"<<endl; }
friend void exchange ( class1 &, class2 &);
};
class class2
{
int value2;
public:
void indata (void)
{ cout<<"enter value2\n";
cin>>value2;
 }
void display(void) {cout<<value2<<endl;}
friend void exchange(class1 &,class2&);
};
void exchange ( class1&x, class2&y)
{
int temp=x. value1;
x. value1=y.value2;
y.value2=temp;
}
int main( )
{
class1 c1;
class2 c2;
c1.indata();
c2.indata();
cout<<"values before exchange:"<<endl;
c1.display( );
c2.display( );
exchange (c1,c2);
cout<<"values after exchange :"<< endl;
c1.display ( );
c2.display ( );
return 0;
}