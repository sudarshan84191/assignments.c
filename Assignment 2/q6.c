/*
Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome). 
*/

#include<stdio.h>
int main()
{
 int num;
 printf("Enter any five digit number");
 scanf("%d",&num);
 int temp=num;
 int rev=0;
 int rem=num%10;
 rev=rev*10+rem;
 if(rev==temp)
 printf("this is palindrome number\n");
 else
 printf("this is not palindrome number \n");
}

