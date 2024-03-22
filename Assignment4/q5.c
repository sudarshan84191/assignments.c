/*
Write a function to print a given character for a given number of times. 
*/
#include<stdio.h>
void print_char(int num,char c)
{
  for(int i=1;i<=num;i++)
  printf("%c",c);
}
int main()
{
  printf("enter any char and how many time you want to print");
  char c;
  int a;
  scanf("%c %d",&c,&a);
  print_char(a,c);
}
