#include<iostream>
using namespace std;
class worker //Base class declaration
{
int age;
char name [15];
public:
void get ( )
{
cout<< "worker name please\n"; 
cin >> name;
cout<< "worker's age please\n";
 cin >> age;
}
void show ( )
{
cout << "In worker’s name is ‘:\n "<<name;
cout << "In worker’s age is:\n"<<age;
}
};
class regular : public worker //derived class 1
{
char name [20] ;
int age ;
public:
void get ( ) ;
void show ( ) ;
} ;
void regular :: get ( )
{
worker :: get ( ) ;
cout << "your (regular) name please"; 
cin >>name;
cout << " enter your regular age please"; 
cin>>age;
}
void regular :: show ( )
{
worker :: show ( ) ;
cout << "regular my name is :" <<name;
cout << "regular my age is : " <<age;
}
class staff : public worker //derived class 2.
{
char name [15] ;
int age;
public:
void get ( )
{
worker :: get ( ) ;
cout << "your (staff) name please\n";
cin>>name;
cout << "staff age please In\n"; 
cin >>age;
}
void show ( )
{
worker :: show ( ) ;
cout << "in my worker name is:\n" << name;
cout<<"In worker age is :\n"<<age;
}
};
int main ( )
{
//clrscr ( ) ;
regular S1;
staff D1 ;
S1. get ( ) ;
D1. get ( ) ;
S1 .show( ) ;
D1. show ( ) ;
return 0;
}