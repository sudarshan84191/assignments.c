/*
Write a program to print table of given number. 
*/ 

#include<stdio.h>
int main()
{ 
 int a;
 printf("enter any number to print table: ");
 scanf("%d",&a);
 int i=1;
 while(i<=10)
 {
  printf("%d * %d =%d\n",a,i,a*i);
  i++;
 }
}
