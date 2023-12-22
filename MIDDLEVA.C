#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter value of a");
 scanf("%d",&a);
 printf("enter value of b");
 scanf("%d",&b);
 printf("enter value of c");
 scanf("%d",&c);
 if((a>b && a<c) || (a<b && a>c))
 printf("a is middle value");
 if((b>a && b<c) || (b<a && b>c))
 printf("b is middle value");
 if((c>a && c<b) || (c<a && c>b))
 printf("c is middle value");
 getch();
 }










