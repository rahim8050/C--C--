
#include <iostream>
#include <fstream>
int main ()
{
fstream myfile;
char name [10];
myfile.open("myfile.txt",ios::out);
if (!myfile)
{
cout<<"file not created";
}
else 
{
cout <<"file created successfully";
cout<<"enter your name";
cin.getline >>name;

myfile<<"your name is"<<name

}
return 0;
}
