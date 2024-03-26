/*
Write a program to accept three integer numbers and find its average. 
*/


#include<stdio.h>
int main()
{
 printf("Enter the any three digits: \n");
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 printf("The average of above numbers is: %d\n",(a+b+c)/3);
 return 0;
}
