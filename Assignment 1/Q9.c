/*
Write a program to convert temperature in Celsius to Fahrenheit and vice versa. 
*/ 


#include<stdio.h>
int main()
{
 printf("fahrenheit to celsius converter\n");
 printf("enter the temperature in f: \n");
 float cel,fht;
 scanf("%f",&fht);
 cel=5*(fht-32)/9;
 printf("The given temperature in celsius is: %.2f\n",cel);
 printf("Celsius to fahrenheit converter\n");
 printf("Enter the temperature in celsius: \n");
 scanf("%f",&cel);
 fht=(9/5)*cel+32;
 printf("The temperature in farhrenheit is: %.2f\n",fht);


}
