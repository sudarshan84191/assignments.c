
/* 
Write a program to display n terms of Fibonacci series 
*/

#include<stdio.h>
  int a=0,b=1,c,n;
void fab(int);
int main()
{
  printf("enter number of terms you want: ");
  scanf("%d",&n);
  fab(n);
}
void fab(int n)
{
  
  printf("\n%d terms of fabonacci series are: ",n);
  for(int p=1;p<=n;p++)
  {
    printf("%d, ",a);
    c=a+b;
	a=b;
	b=c;

  }
}
