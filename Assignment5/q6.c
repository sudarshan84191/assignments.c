/*
Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.
*/  

#include<stdio.h>
int arr[5];
void accpt()
{
  for(int i=0;i<5;i++)
  scanf("%d",arr+i);
}
int func1()  //this function for remove duplicate elements
{ 
  accpt();
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<5;j++)
	{
	  if(arr[i]==arr[j])
	  {
	    for(int k=j;k<4;k++)
		arr[k]=arr[k+1];
	  }

	}
  }
}
int func2()  //this function is for to calculate the remaining number of unique characters
{
printf("the number of elements in array is: %d\n",sizeof(arr)/sizeof(int));
}
int main()
{
  func1();
  func2();
}

