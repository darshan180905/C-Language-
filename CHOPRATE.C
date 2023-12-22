#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("\n enter the oprater");
 scanf("%c",&ch);
 if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
 {
  printf("\n alfabet");
 }
 else if(ch>='0' && ch<='9')
 {
  printf("\n digits");
 }
 else
 {
  printf("\n symbol");
 }
 getch();
 }












