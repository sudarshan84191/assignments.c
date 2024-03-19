/*
Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
*/

#include<stdio.h>
int main()
{ 
  printf("enter the range to print tables ");
  int a,b;
  scanf("%d%d",&a,&b);
  for(int i=1;i<=10;i++)
  {
    for(int j=a;j<=b;j++)
	{
	  printf("%-4d",i*j);
	}
	printf(" \n");
  }
}
