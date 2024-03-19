/*Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8 */


#include<stdio.h>
int main()
{
int a=0;
int b=1;
int c =a+b;

for(int i=0 ; i<=6 ; i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
