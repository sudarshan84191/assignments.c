/*
Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500 
*/

#include<stdio.h>
int main()
{
  int flag=0,count=0;
  printf("prime numbers between 1 to 100 are: ");
  for(int i=2;i<=100;i++)
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
	printf(" %d,",i);
	flag=0;
  }
  printf("\n Armstrong Numbers between 1 to 500 are: ");
  for(i=1;i<=500;i++)
  {
    
  }


}
