/*
Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1.
*/
#include<stdio.h>
void accept_arr(int arr[])
{
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
binary_search(int arr[],int n)
{
  int high,low,mid;
  high=4;
  low=0;
  while(low<high)
  {
    mid=(high+low)/2;
    if(n==arr[mid])
	return mid;
	else if(n<arr[mid])
	high=mid;
	else
	low=mid;
	}
   return -1;
}

int main()
{
  int arr[5];
  printf("enter the array elements:");
  accept_arr(arr);
  printf("which no do you want to find: ");
  int n;
  scanf("%d",&n);
  printf("the given number at index %d", binary_search(arr,n));

}

