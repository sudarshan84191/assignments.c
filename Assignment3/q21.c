/*
Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23 
*/

#include<stdio.h>
int main()
{
  int flag=0,count=0;
  printf("first 5 prime numbers between 21 to 100 are: ");
  for(int i=20;i<=100;i++)
  {
    for(int j=2;j<=(i/2);j++)
	{
	  if(i!=j && i%j==0)
	  {
	  flag=1;
	  break;
	  }
	}
	if(flag==0)
	{
	printf(" %d,",i);
	count=count+1;
	if(count==5)
	break;
	}
	flag=0;
  }
}
