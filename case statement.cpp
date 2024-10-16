#include <iostream>
using namespace std;
int main ()
{
	int number;
	cout<<"enter number\n";
	cin>>number;
	switch (number)
	{
		case 0:
		{
		cout<<" you have o salary";
				break;	
		}	
			case 1:
			{
				
				cout<<"you have 5000";
				break;
			}
			case 2:
			{
				
				cout<<"you have 10000";
				break;
			}
			
				case 3:
				{
					
				cout<<"you have 15000";
				break;
				}
				
			default:
			{
				
				cout<<"invalid entry";
				break;
			}
				
	}
	return 0;
}
