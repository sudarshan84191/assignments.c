/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/





#include<stdio.h>

int main()

{
int a;
int b;

scanf("%d%d",&a,&b);

printf("find the sum of two number=%d\n",a+b);

printf("Find the difference of two number=%d\n",a/b);

printf("Find the product of two number=%d\n",a*b);

return 0;
}
