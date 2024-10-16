#include<iostream>
using namespace std;
class worker 
{
int age;
char name [20] ;
public:
void get( ) ;
void show( ) ;
};
void worker:: get ( )
{
cout << "your name please\n" ;
cin >> name;
cout << "your age please\n" ;
cin>>age;
}
void worker :: show ( )
{
cout << "In my name is :" <<name;
cout<< "in my age is : " <<age;
}
class manager : public worker 

{ 
int now;
public:
void get ( ) ;
void show( ) ;
};
void manager :: get ( )
{
worker ::get () ; 
cout << "no. of workers under you:\n";
cin >> now;
}
void manager :: show ( )
{
worker :: show ( ) ; //calling show ( ) fn. of base class
cout << "In no. of workers under me are:\n"<< now;
}
class ceo: public manager //declaration of derived class
{ //publicly inherited from the
int nom; //intermediate base class
public:
void get ( ) ;
void show ( ) ;
};
void ceo :: get ( )
{
manager :: get ( ) ;
cout << "no. of managers under you are:\n";
 cin >> nom;
}
void ceo :: show ( )
{
cout << "In the no. of managers under me are: In\n";
cout << "nom"<<nom;
}
int main ( )
{

ceo cl ;
cl.get ( ) ;
 cout << "\n\n";
cl.show ( ) ;
return 0;
}