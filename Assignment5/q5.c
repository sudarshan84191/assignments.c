/*
Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements.
*/

#include<stdio.h>
int arr[5];
void accept_arr()
{
  printf("enter the array values: \n");
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
void max()
{ 
  int high=arr[0];
  printf("the maximum in array elements is: ");
  for(int i=0;i<5;i++)
  if(arr[i]>high)
  high=arr[i];
  printf("%d",high);
}
void min()
{ 
  int low=arr[0];
  printf("the minimum in array elements is: ");
  for(int i=0;i<5;i++)
  if(arr[i]<low)
  low=arr[i];
  printf("%d",low);
}
int main()
{
  accept_arr();
  max();
  min();
  return 0;
}
