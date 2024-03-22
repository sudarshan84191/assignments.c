#include<stdio.h>
int main()
{
  process:
  char opt='y',opr;
  int a,b;
  while(opt=='y')
  {
    printf("enter the expression: ");
    scanf("%d %c %d",&a,&opr,&b);
    switch(opr)
	{
	  case '+':
	  printf("answer is: %d",a+b);
	  break;
	  case '-':
	  printf("answer is: %d",a-b);
	  break;
	  case '*':
	  printf("answer is: %d",a*b);
	  break;
	  case '/':
	  if(b==0)
	  printf("can not divide by zero");
	  else
	  printf("answer is: %d",a/b);
	  break;
	}
	printf("do you want to continue: yes(press y) no(press other than y) ");
	scanf("%c",&opt);
  }

}
