/* 
Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.  
*/ 
 
#include<stdio.h>
int main()
{ 
 printf("enter any two number");
 int a,b;
 scanf("%d%d",&a,&b);
 if(a>b)
 printf("%d is greater \n",a);
 else
 printf("%d is greater \n",b);

printf("use of conditional operator: \n");
a>b?printf("%d is greater",a):printf("%d is greater ",b);

}
