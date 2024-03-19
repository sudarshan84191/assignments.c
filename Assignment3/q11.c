/*
Write a program to find factorial of given number

*/

#include<stdio.h>
int main()
{
  int num;
  printf("put any number ");
  scanf("%d",&num);
  for(int i=1;i<=(num/2);i++)
  {
    if(num%i==0)
	printf("%d, ",i);
  }
}
