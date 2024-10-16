#include <iostream>
using namespace std;
class arithmetic
{
	private:
		int m,n,o,product;
		public:
				arithmetic (int,int,int);
			void determine (void);
		
		};
 arithmetic::arithmetic(int x,int y,int z)
			{
				m=5;
				n=7;
				o=9;
			}
			void arithmetic:: determine(void)
			{
			product=m*n*o;
			cout<<"the product is\n"<<product;	
			}

int main ()
{
arithmetic t;
t.determine();	



//cout << "background's=7";
return 0;
}