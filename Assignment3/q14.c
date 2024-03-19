//Write a program to accept a number and check whether it is Prime no.


#include<stdio.h>
int main()
{
int a;
printf("aceept the number:");
scanf("%d",&a);
int temp=1;
for(int i=2 ; i<=a ; i++)
{
if(a%i ==0)
{
temp=0;
break;
}
}
if(temp==1)
printf("this is a prime number:");
else
printf("this is not prime:");



return 0;

}
