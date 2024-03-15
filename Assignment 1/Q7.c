/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include<stdio.h>
int main()
{
char ch;
int asciivalue;

// input characte from user
printf("Enter a character:");
scanf("%c",&ch);
//print ascii value in decimal,hexadecimal,and octal formats
printf("ascii value in decimal:%d\n",ch);
printf("ascii value in hexadecimal:%x\n",ch);
printf("ascii value in octal:%o\n",ch);
//input ascii value from user 
printf("\nEnter an ascii value:");
scanf("%d",&asciivalue);
//print corrosponding character for the ascii value 
printf("character for ascii value %d is %c\n",asciivalue,asciivalue);
return 0;
}
