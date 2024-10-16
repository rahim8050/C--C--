#include <iostream>
using namespace std;
class item
{
static int count; //count is static
int number;
public:
void getdata(int a)
{
number=a;
count++;
}
void getcount(void)
{
cout<<"count:";
cout<<count<<endl;
}
};
int item :: count ; //count defined
int main( )
{
item a,b,c;
a.getcount( );
b.getcount( );
c.getcount( ):
a.getdata( ):
b.getdata( );
c.getdata( );
cout«"after reading data : "«endl;
a.getcount( );
b.getcount( );
c.getcount( );
return(0);
}

