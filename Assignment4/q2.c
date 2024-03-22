/*
Write a function to calculate power.
*/

#include<stdio.h>
int cal_pow(int num,int power)
{
  int a=1;
  for(int i=1;i<=power;i++)
  {
    a=a*num;
  }
  return a;
}
int main()
{
  printf("put any two number to calcute power ");
  int num,power;
  scanf("%d%d",&num,&power);
  printf("the final value is: %d",cal_pow(num,power));

}

