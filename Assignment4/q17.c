/* 
Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables 
*/

#include<stdio.h>
int n1=10,n2=20;
void func(int * ,int *);
int main()
{
  n1=11;
  n2=20;
  func(&n1,&n2);
}

void func(int *num1,int *num2)
{
  int sum=*num1 + *num2;
  int product=(*num1)*(*num2);
  printf("by using global variables: ");

  printf("the sum of values is %d and product is %d \n",n1+n2,n1*n2);
  printf("by without global variables: ");
  printf("the sum of values is %d and product is %d ",sum,product);
}


