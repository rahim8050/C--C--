#include <iostream>
using namespace std;
#include <string.h>
class home
{
	public:
		char name;
		char ownername;
	void	setdata(void);
};

int main ()
{
	home p;
	p.setdata("james","rahim");
	cout<<"the name is"<<name;
	cout<<"the owner name is "<<ownername;
	return 0;
}