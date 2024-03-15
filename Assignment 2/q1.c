/*
Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message. 

*/ 

#include<stdio.h>
int main()
{
 int a,b;
 printf("enter any two number :");
 scanf("%d%d",&a,&b);
 if(b==0)
 printf("can not divide by zero.");
 else
 printf("the division of given number is : %d\n",a/b);

}
