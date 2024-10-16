#include<iostream>
using namespace std;
 class student
  {
//base class declaration
protected:
int r_no;
public:
void get_n (int a)
{
r_no =a;
}
void put_n (void)
{
cout << "Roll No. : "<< r_no;
cout << "\n";
}
};
class test : public student
{ //Intermediate base class
protected : int part1, part2;
public :
void get_m (int x, int y) {
part1 = x; 
part2 = y; }
void put_m (void) {
cout << "marks obtained: ";
cout<< part1<< "\n";
cout <<"marks obtained in";
cout<< part2<< "\n";
}
};
class sports // base for result
{
protected : 
int score;
public:
void get_s (int s) {
score = 5; }
void put_s (void) {
cout << " sports wt. : " << score << "\n";
}
};
class result : public test, public sports //Derived from test &sports
{
int total;
public:
void display (void);
};
void result :: display (void)
{
total = part1 + part2 + score;
put_n ( ) ;
put_m ( );
put_s ( );
cout << "Total score: " <<total<< "\n";
}
int main ( )
{
//clrscr ( ) ;
result S1;
S1.get_n (347) ;
S1.get_m (30, 35);
S1.get_s (7) ;
S1.display ();
return 0;
}