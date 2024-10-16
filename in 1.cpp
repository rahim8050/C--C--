#include <iostream>

using namespace std;

inline int area (int length, int width)
{
	return (length*width);
}
int main()
{
	int length,width;
	cout <<"enter your length\n";
	cin>>length;
	cout <<"enter your width\n";
	cin>>width;
	cout <<"the area is"<<area( length, width);
	return 0;
}