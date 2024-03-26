/*
Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators. 
*/

#include<stdio.h>
int main()
{
 int year,month;
 printf("enter the year");
 scanf("%d",&year);
 printf("enter no of the month: \n JAN:1,FEB:2,MAR:3,APR:4,MAY:5,JUN:6,JULY:7,AUG:8,SEPT:9,OCT:10,NOV:11,DEC:12");
 scanf("%d",&month);
 if(year%400==0)
 { 
  printf("this year contain 366 days");
  if(month==2)
  printf(" and month have 28 days");
  else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
  printf(" and month have 31 days");
  else
  printf(" and month have 30 days");
 }
 else if(year%100==0)
 {
  printf("this year contain 365 days");
  if(month==2)
  printf(" and month have 28 days");
  else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
  printf(" and month have 31 days");
  else
  printf(" and month have 30 days");
 }
 else if(year%4==0)
 {
  printf("this year contain 366 days");
 
  if(month==2)
  printf(" and month have 29 days");
 else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)

  printf(" and month have 31 days");
  else
  printf(" and month have 30 days");
 }
 else
 {
  printf("this year contain 365 days");
  if(month==2)
  printf(" and month have 28 days");
 else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
  printf(" and month have 31 days");
  else
  printf(" and month have 30 days");
 }
}
