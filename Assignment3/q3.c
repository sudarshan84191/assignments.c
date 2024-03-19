/*
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number 

*/

#include<stdio.h>
int main()
{
 int num,rem,count=0,rev=0,a=1,b=0;
 printf("Tell me any number: ");
 scanf("%d",&num);
 int temp=num;
 int temp1=num;
 int sum=0;
 while(num!=0)
 {
  rem=num%10;
  count=count+1;
  rev=(rev*10)+rem;
  num=num/10;
  sum=sum+rem;
 } 
  printf("the sum of digits in number is :%d\n",sum);
  printf("the reverse of number is :%d\n",rev);
if(rev==temp)
printf("this number is palindrome. \n");
else
printf("this is not palindrome. \n");
while(temp!=0)
{
 sum=0;
 a=1;
 rem=temp%10;
 while(sum<count)
 {
  a=a*rem;
  sum++;
 }
 b=b+a;
 temp=temp/10;
}
if(b==temp1)
printf("this is alrmstrong number.\n ");
else
printf("this is not armstrong number. \n");
}

