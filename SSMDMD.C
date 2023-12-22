#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char ch;
	clrscr();
	printf("\n enter the oprater");
	scanf("%c",&ch);
	printf("\n enter the value of a");
	scanf("%d",&a);
	printf("\n enter the value of b");
	scanf("%d",&b);
	switch(ch)
	{
	 case '1' :
	 printf("\n addition %d", a+b);
	 break;
	 case '2' :
	 printf("\n substraction %d",a-b);
	 break;
	 case '3' :
	 printf("\n multiplication %d",a*b);
	 break;
	 case '4' :
	 printf("\n division %d",a/b);
	 break;
	 case '5' :
	 printf("\n modular %d",a%b);
	 break;
	 default :
	 printf("\n wrong number pleace cheack");
	 break;
	 }
	 getch();
}