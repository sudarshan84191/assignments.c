/*
Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
*/

#include<stdio.h>
int cal_range(int a)
{
  int b=1;
  for(int i=1;i<=a*8;i++)
  {
    b=b*2;
  }
  return b;
}

int main()
{
printf("the range of char is 0 to %d\n",cal_range(sizeof(char)));
printf("the range of short int is 0 to %d\n",cal_range(sizeof(short int)));
printf("the range of int is 0 to %ld\n",cal_range(sizeof(int)));
printf("the range of float is 0 to %ld\n",cal_range(sizeof(float)));
printf("the range of double is 0 to %ld\n",cal_range(sizeof(double)));
}
