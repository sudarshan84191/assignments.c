
 #include<stdio.h>
 int a,b,rem;
 int find_gcd(int,int);
 int main()
 {
  printf("enter any two numbers to find its GCD: ");
  scanf("%d%d",&a,&b);
//  while(a%b>0)
//  {
//   rem=a%b;
//   a=b;
//   b=rem;
//  }
 printf("%d is GCD of numbers.",find_gcd(a,b));
 }
 int find_gcd(int a,int b)
 {
   
   rem=a%b;
   if(rem==0)
   return b;
   else
   return find_gcd(b,rem);
 }

