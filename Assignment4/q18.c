/*
Write a function to swap two numbers.
*/

#include<stdio.h>
void swap(int * a,int * b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  printf("enter two numbers for swapping using pointers: ");
  int n1,n2;
  scanf("%d%d",&n1,&n2);
  printf("before swapping: n1=%d and n2=%d \n",n1,n2);
  swap(&n1,&n2);
  printf("after swapping: n1=%d and n2=%d \n",n1,n2);
}


