/*
Write a function to print a given number in binary format.
*/
#include<stdio.h>
int rem=1;
void binary_format(int);
int main()
{
  int n;
  printf("enter any number to find its binary format: ");
  scanf("%d",&n);
  binary_format(n);
}
void binary_format(int a)
{
  printf("%d",a%2);
  if(a==0 || a==1)
  return a;
  else
  return binary_format(a/2);
}

