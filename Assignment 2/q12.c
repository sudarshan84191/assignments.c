/*  
Write a program to crate four function calculator. Four functions are +, - , *, / 
*/ 

#include<stdio.h>
int main()
{
 int a,b;
 char c;
 printf("enter any two numbers\n");
 scanf("%d%d",&a,&b);
 printf("which operation do you want to cmpute:  +,-,/,* \n");
 scanf("%c",&c);
 switch(c)
 {
  case '+':
  printf("%d%c%d=%d",a,c,b,a+b);
  break;
  case '-':
  printf("%d%c%d=%d",a,c,b,a-b);
  break;
  case '*':
  printf("%d%c%d=%d",a,c,b,a*b);
  break;
  case '/':
  printf("%d%c%d=%d",a,c,b,a/b);
 }
}
