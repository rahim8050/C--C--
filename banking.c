#include "stdio.h"
int main ()
 {
 int amount,date,choice;
 char accountname;
 choice=10;

 printf("************************\n");
 printf("************************\n");
 printf("************************\n");
  printf("welcome to western bank\n");
 switch (choice)
 {


 case 1:
 printf("enter the amount to deposit\n");
 scanf("%d\n",&amount);
 break;
 case 2:
 printf("enter the date opened\n");
 scanf("%d",&date);
 break;
 case 3:
 printf("enter account name");
 scanf("%c",& accountname);
 break;

 }
 return 0;



















 }
