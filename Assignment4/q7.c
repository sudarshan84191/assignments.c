
/* 
Write a program to display n terms of Fibonacci series 
*/

#include<stdio.h>
  int a=0,b=1,c,n;
  char choice='y';
void fab(int);
int main()
{
   printf("if you want to continue press y and  enter or want to exit press ctrl+c ");
   while(choice=='y')
   {
    fab(n);
   scanf("%c",&choice);
}
}
void fab(int n)
{
  
    printf("%d\n ",a);
    c=a+b;
	a=b;
	b=c;
}
