/*Write a program to accept integer values of base and index and calculate power of base to
index.
Input: base: 2 Index: 5
Output:32
Input: base:8   Index:3 
Output: 512 */

#include<stdio.h>

int main()
{
int a;
int b;
int n=1;
scanf("%d%d",&a,&b);
printf("Calculate power of base to index:");
	for(int i=1 ; i<=b ; i++)
	n=n*a;
	printf("%d",n);
return 0;
}
