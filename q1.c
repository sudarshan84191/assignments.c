/*1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results*/



#include<stdio.h>
int main()
{
int a, b;
scanf("%d%d",&a,&b);
printf("Sum of two number,%d",a+b);
printf("difference of two number,"%d,a/b);
printf("product of two numbers,%d"a*b);

return 0;
}
