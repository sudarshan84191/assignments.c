//Write a program to accept a 4 digit number and
//a. Display face value of each decimal digit
//b. Display place value of each decimal digit
//c. Display no in reverse order by changing decimal place values


#include<stdio.h>
int main(void)
{
//abcd
int num = 9361,a,b,c,d;
int temp = num;
d = num % 10 ;
num = num / 10;

c = num % 10;
num = num / 10;
b = num % 10;
num = num / 10;
a = num ;
printf("%d %d %d %d \n",a,b,c,d);
printf("%d = %d + %d + %d + %d \n",temp,a *1000,b *100, c* 10,d);

printf("%d %d %d %d",d,c,b,a);
return 0;
}


