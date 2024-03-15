/*
Write a program to find maximum of three numbers using
a. If – else
b. conditional operator. 
*/

#include<stdio.h>
int main()
{
 printf("put the numbers ");
 int c,a,b;
 scanf("%d%d%d",&c,&a,&b);
 if(a>b)
 {
  if(b>c)
  printf("%d is grater ",a);
  else
  printf("%d is greater ",c);

 }
 else
 {
  if(b>c)
  printf("%d is greater",b);
  else
  printf("%d is greater",c);
 }
}
