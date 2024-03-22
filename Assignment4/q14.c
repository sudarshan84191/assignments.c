/*
Write a function to calculate nth term of the Fibonacci series using recursion. Write another
function to print given number of terms of Fibonacci series.

*/
int fab_num(int);
#include<stdio.h>
int a,b=1,c;
int fab_series()
{
  int n;
  a=0;
  b=1;
  c=0;
  printf("\nenter number of terms you want: ");
  scanf("%d",&n);
  printf("\n%d terms of fabonacci series are: ",n);
  for(int p=1;p<=n;p++)
  {
    printf("%d, ",a);
    c=a+b;
	a=b;
	b=c;

  }
}

int main()
{
  int n;
  printf("give the nth fabonacci series you want number: ");
  scanf("%d",&n);
  printf("the %dth number in fabonacci series is: %d",n,fab_num(n));
  fab_series();
}
int fab_num(int num)
{
  c=a+b;
  a=b;
  b=c;
  if(num==2)
  return a;
  else
  return fab_num(num-1);
}
