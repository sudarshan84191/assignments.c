/*
Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit. 

*/

#include<stdio.h>
int main()
{  
  
  int next;
  do{
  printf("do you want to calculate:(1 for yes, 0 for no)");
  scanf("%d",&next);
  int a,b;
  char sign;
  printf("enter the values ");
  scanf("%d%d",&a,&b);
  printf("enter the sign ");
  scanf("%*c",sign);
  
    switch(sign)
	{
	   case '+':
	   printf("%d+%d=%d",a,b,a+b);
	   break;

       case '-':
       printf("%d+%d=%d",a,b,a-b);
       break;
       case '*':
       printf("%d+%d=%d",a,b,a*b);
       break;
       case '/':
	   if(b==0)
	   printf("can not divide by zero");
	   else
       printf("%d+%d=%d",a,b,a/b);
       break; 
	}
   
   }
  while(next!=0);
}
