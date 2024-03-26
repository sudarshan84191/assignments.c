/*
Write a function to search the given number into the array using linear search and return the
address of the element. If element is not found it should return NULL.
*/
#include<stdio.h>
accept_arr(int arr[])
{
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
find_num(int arr[],int n)
{
  for(int i=0;i<5;i++)
  {
    if(arr[i]==n)
	return arr+i;
  }
  return NULL;

}

int main()
{
  int arr[5];
  printf("enter the array elements: \n");
  accept_arr(arr);
  int n;
  printf("which number do you want to find: ");
  scanf("%d",&n);
  printf("the address of given number is  %u\n ",find_num(arr,n));

}
