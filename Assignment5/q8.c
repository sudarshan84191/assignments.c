/*
Write a function to search the given number into the array using linear search and return the
index of the element. If element is not found it should return -1
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
	return i;
  }
  return -1;

}

int main()
{
  int arr[5];
  printf("enter the array elements: \n");
  accept_arr(arr);
  int n;
  printf("which number do you want to find: ");
  scanf("%d",&n);
  printf("the given number at %d index",find_num(arr,n));

}
