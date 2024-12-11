#include "stdio.h"
int main ()
{
   //float a=10,b=30,c=20,sum;//declaring the variables
    //sum=a+b+c;
   // char name;
    //printf("enter your name");
    //scanf("%c",& name);
    int marks=100,sum=1+marks;
    printf("enter your marks ");
    scanf("%d",&marks);
    if (marks>=80 && marks<=100)
    {
        printf("Excellent",sizeof(marks));

    }
    else if (marks>=60 && marks<=79)
    {
        printf("good");
    }
    else
    {
        printf("invalid entry");
    }



printf("the value of sum is:%f",sum);
return 0;





}
