/*
Write a program to accept marks of five subjects, calculate its total and average.
*/

#include<stdio.h>
int arr[5];
void accept_marks(void)
{
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
float avg()
{
  int a=0;
  for(int i=0;i<5;i++)
  a=a+arr[i];
  return a/5.0f;
}
int main()
{
  printf("enter the marks out of 100: ");
  accept_marks();
  printf("the average of marks is: %.2f ",avg());
}
