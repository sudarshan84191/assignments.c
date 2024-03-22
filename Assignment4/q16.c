/*
Write a function to print a given number in hexadecimal format.
*/
#include<stdio.h>
void hexad_format(int);
int main()
{
  int n;
  printf("enter any number to find its binary format: ");
  scanf("%d",&n);
  hexad_format(n);
}
void hexad_format(int a)
{
  printf("the given number in hexadecinal format is: %x",a);
}

