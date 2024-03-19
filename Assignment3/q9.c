/*
Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3 
 */

 #include<stdio.h>
 int main()
 {
  int a,b,rem;
  printf("enter any two numbers to find its GCD: ");
  scanf("%d%d",&a,&b);
  while(a%b>0)
  {
   rem=a%b;
   a=b;
   b=rem;
  }
 printf("%d is GCD of numbers.",b);
 }
