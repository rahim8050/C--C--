#include "stdio.h"
int main ()
{
    int payroll;
	float tax,total;
    printf("enter the payroll\n");
    scanf("%d\n", & payroll);
    printf("enter the tax rate\n");
    scanf("%f\n",& tax);
    total=payroll*tax;
    printf("the total is:0.4%f",total);
    return 0;
}
