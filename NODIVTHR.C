#include<stdio.h>
#include<conio.h>
void main()
{
 int number;
 clrscr();
 printf("programme number divi by 3 and 9");
 printf("enter a number");
 scanf("%d",&number);
 if(number%3==0)
 {
 if(number%9==0)
  {
	printf("number is divi by 3 & 9");
  }
 if(number%9!=0)
  {
	printf("number is divi by 3,but not divi by 9");
  }
 }
 if(number%3!=0)
  {
	printf("number is nither divi by 3 nor 9");
  }
  getch();
}











