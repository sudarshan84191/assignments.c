/*
Write a program to accept number and check whether the number is +ve, -ve and zero. 
*/ 

#include<stdio.h>
int main()
{
 int num;
 printf("Put any number below");
 scanf("%d",&num);
 if(num<=-1)
 printf("this is a negative number");
 else if(num>=1)
 printf("this number is positive");
 else
 printf("this is zero");

}
