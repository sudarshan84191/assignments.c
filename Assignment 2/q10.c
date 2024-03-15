/*Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above
*/
#include<stdio.h>
int main()
{
printf("enter any character:");
char c;
scanf("%c",&c);
if(c>=65 && c<=90)
printf("This is upper case:");
else if(c>=97 && c<=122)
printf("this is a lower case");
else if(c>=48 && c<=57)
printf("c is a digit");
else if(c==32)
printf("this is space");
else if(c==9)
printf("carriage return");
else if(c==10)
printf("new line");
else 
printf("not listed above");
return 0;
}
