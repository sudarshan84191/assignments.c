/*
Write a function to calculate factorial of a given number. 
*/

#include<stdio.h>
int fact(int);
int main()
{
  printf("put any number to calculate its factorial: ");
  int a;
  scanf("%d",&a);
  printf("the factorial of given number is: %d", fact(a));
 
}
int fact(int num)
{
  if(num==1)
  return 1;
  else
  return num*fact(num-1);
}

