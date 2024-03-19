/* 
Write a program to find factorial of given number. 
*/

#include<stdio.h>
int main()

{
 int num;
 printf("enter any number to find factorial: ");
 scanf("%d",&num);
 int i=num-1;
 while(i>0)
 {
  num=num*i;
  i=i-1;
 }
 printf("factorial of given number is: %d\n",num);
}


