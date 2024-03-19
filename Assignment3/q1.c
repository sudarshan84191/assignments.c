/* 
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
****** 

*/

#include<stdio.h>
int main()
{
  char ch;
  int num;
  printf("enter any character: ");
  scanf("%c",&ch);
  printf("enter any number to print char multiple times: ");
  scanf("%d",&num);
  for(int i=1; i<num ;i++)
  printf("%c",ch);

}
