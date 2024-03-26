/*
Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on ␁␂␃␂␄␃␅␆, ␁␇␂␄␃␅␆, ␈ ␅ ␅ 
*/ 

#include<stdio.h>
int main()
{
 printf("enter the x and y values to find cartesion");
 int x,y;
 scanf("%d %d",&x,&y);
 if(x==0 && y==0)
 printf("point lies on the center or origin");
 else if(x==0)
 {
  if(y>0)
  printf("point lies on +ve y axis");
  else
  printf("point lies on -ve y axis");
 }
 else if(y==0)
 {
  if(x>0)
  printf("point lies on +ve x axis");
  else
  printf("point lies on -ve x axis");
 }
 else if(y>0)
 {
  if(x<0)
  printf("point lies 2nd coordinate");
  else
  printf("point lies in 1st coordinate");
 }
 else
 {
  if(x>0)
  printf("point lies in 4th coordinate");
  else
  printf("point lies in 3rd coordinate");
 }

}
