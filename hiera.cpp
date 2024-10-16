#include<iostream>
using namespace std;
class father //Base class declaration
{
int age;
char name [15];
public:
void get ( )
{
cout<< "father name please\n"; 
cin >> name;
cout<< "father’s age please\n";
 cin >> age;
}
void show ( )
{
cout << "In father’s name is ‘:\n "<<name;
cout << "In father’s age is:\n"<<age;
}
};
class son : public father //derived class 1
{
char name [20] ;
int age ;
public:
void get ( ) ;
void show ( ) ;
} ;
void son :: get ( )
{
father :: get ( ) ;
cout << "your (son) name please"; 
cin >>name;
cout << "your age please"; 
cin>>age;
}
void son :: show ( )
{
father :: show ( ) ;
cout << "In my name is :" <<name;
cout << "In my age is : " <<age;
}
class daughter : public father //derived class 2.
{
char name [15] ;
int age;
public:
void get ( )
{
father :: get ( ) ;
cout << "your (daughter’s) name please\n";
cin>>name;
cout << "daughters age please In\n"; 
cin >>age;
}
void show ( )
{
father :: show ( ) ;
cout << "in my father name is:\n" << name;
cout<<"In and his age is :\n"<<age;
}
};
int main ( )
{
//clrscr ( ) ;
son S1;
daughter D1 ;
S1. get ( ) ;
D1. get ( ) ;
S1 .show( ) ;
D1. show ( ) ;
return 0;
}