#include <stdio.h>
int main ()
{
    int payroll,tax,total;
    printf("enter the payroll\n");
    scanf("%d\n", & payroll);
    printf("enter the tax rate\n");
    scanf("%d\n",& tax);
    total=payroll*tax;
    prinntf("the total is:%d",total);
    return 0;
}
