/*
Write a program to accept a number and print all factors excluding the number 
*/
#include<stdio.h>
int main()
{
 int num;
 printf("put any number: ");
 scanf("%d",&num);
 int i=1;
 while(i<=(num/2))
 {
  if(num%i==0)
  printf("%d ,",i);
  i=i+1;
 }
}


