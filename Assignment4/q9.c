/*
Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range. 
*/

void func1(int);
void func2(int);
#include<stdio.h>
int rec=1;
int main()
{
  int num;
  printf("enter any number: ");
  scanf("%d",&num);
  func1(num);
  func2(num);
}
void func1(int num)
{
  for(int i=2;i<=(num/2);i++)
  {
    if(num%i==0)
	{
	  rec=0;
	  break;
	}
  }
  if(rec==0)
  printf("this is not prime number \n ");
  else
  {
    printf("this is prime \n");
	rec=1;
  }
}

void func2(int num)
{
  for(int i=2;i<=num;i++)
  {
    for(int j=1;j<=(i/2);j++)
    if(i%j==0 && i!=2 && j!=1)
	{
	  rec=0;
	  break;
	}
  
    if(rec==1)
    printf("%d,  ",i);
	rec=1;
  }

}
