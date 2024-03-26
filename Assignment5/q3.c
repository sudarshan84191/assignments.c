/*
Write a function to accept array elements from the user. Write another function to print array
elements.
*/

#include<stdio.h>
int arr[5];
void accept_arr()
{
  printf("enter the array values: \n");
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
void print_arr()
{
  printf("the array values in revrese order are:\n");
  for(int i=4;i>=0;i--)
  printf("%-3d",arr[i]);
}
int main()
{
  accept_arr();
  print_arr();
  return 0;
}
