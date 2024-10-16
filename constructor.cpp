#include<iostream>
using namespace std;
class abc
{
private:
char nm[];
public:
abc ( )
{
cout<<"enter your name:";
cin>>nm;
}
void display( )
{
cout<<nm;
}
};
int main( )
{

abc d;
d.display( );

return 0;
}