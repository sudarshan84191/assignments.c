/*
Write a program to print following pattern.
a. Using multiple printf statements
b. Using single printf statement
*
**
***
****
*****
*/


#include<stdio.h>

/*int main()

{
printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");
printf("*****\n");



*/
int main()
{
 int star = 5;
 for(int i=1;i<=star;i++)
 {
 for(int j=1;j<=i;j++)
 {
printf("*");
}
printf("\n");
}
}
