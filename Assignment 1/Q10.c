/*
Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.  

*/
#include<stdio.h>
#include<math.h>
int main()
{
 printf("put the length of triangl: ");
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 int s=a+b+c;
 printf("perimeter of a triangle is %d\n",a+b+c);
 float area,temp=s*(s-a)*(s-b)*(s-c);
 printf("the area of triangle is: %f\n",sqrt(temp));
}
 

