#include <iostream>
using namespace std;
int main ()
{
	int length,width,area,perimeter;
	cout <<"enter length\n";
	cin >> length;
	cout << "enter width\n";
	cin >> width;
	area=length*width;
	perimeter=(2*length)+(2*width);
	cout<< "the area is:"<<area<< "\n";
	cout <<"the perimeter is:"<<perimeter<< "\n";

	return 0;
}