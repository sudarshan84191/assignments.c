/*
Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50. 

*/ 

#include<stdio.h>
int main()
{
 float qtt;
 printf("enter the number of quantity");
 scanf("%f",&qtt);
 if(qtt>=50)
 printf("the final price of %.0f quantites is %.1f",qtt,((5*qtt)-((5*qtt)/100)*15));
 else if(qtt>=30)
 printf("the final price of %.0f quantites is %.1f",qtt,((5*qtt)-((5*qtt)/100)*10));
 else
 printf("the final price of %.0f quantites is %.1f",qtt,(5*qtt));
}
