#include<iostream>
using namespace std;
class worker
{
int age;
char name [10];
public:
void get ( );
void show (void);
};
void worker :: get ( )
{
cout <<"your name please\n";
cin >> name;
cout <<"your age please\n" ;
cin >> age;
}
void worker ::show ( )
{
cout <<"In My name is :"<<name<<"In My age is\n :"<<age;
}
class manager : public worker 
{
int now;
public:
void get ( ) ;
void show ( ) ;
};
void manager :: get ( )
{
worker :: get ( ) ; 
cout << "number of workers under you\n";
cin >> now;

} 
void manager :: show ( )
{
worker :: show ( ); 
cout <<"in No. of workers under me are:\n " << now;
}
main ( )
{
worker W;
manager M;
M .get ( );
M.show ( ) ;
W.get();
W.show();

return 0;
}