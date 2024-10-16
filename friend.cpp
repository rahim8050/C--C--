#include<iostream>
using namespace std;
class sample 
{
	private:
int a;
int b;
public:
void setvalue( ) { a=25;b=40;};
friend float mean( sample );
};
float mean (sample x)
{
return (float(x.a+x.b)/2.0);
}
int main ( )
{
sample x;
x . setvalue( );
cout<<"mean value="<<mean(x)<<endl;
return(0);
}