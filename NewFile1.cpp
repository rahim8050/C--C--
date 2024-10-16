 #include<iostream>
 using namespace std;
#include<conio.h>
class employee
{
private:
char name[20];
int age,sal;
public:
void getdata();
void putdata();
};
void employee :: getdata ()
{
cout<<"enter name\n";
cin>>name;
cout<<"enter age :\n";
cin>>age;
cout <<"enter salary”;
cin>>sal;
}
void employee :: putdata()
{
cout<<name <<endl;
cout<<age<<endl;
cout<<sal<<endl;

}
int main()
{

employee emp[5]:
for( int i=0;i<5;i++)
	int i;
{
emp[i].getdata();
}
cout<<endl;
for(i=0;i<5;i++)
{
emp[i].putdata();
}

return(0);
}