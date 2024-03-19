/* 
Write a program to print table of given number. 
*/ 

#include<stdio.h>
int main()
{
  int num;
  printf("enter any number ");
  scanf("%d",&num);
  for(int i=1;i<=10;i++)
  printf("%d * %d=%d\n",i,num,i*num);
}
