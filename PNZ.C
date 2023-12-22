#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("\n program for nested switch");
	printf("\n enter the number");
	scanf("%d",&number);
	switch(number>0)
	{
	 case 1:
	 printf("\n positive");
	 break;
	 case 0:
	 switch(number==0)
	 {
	 case 1:
	 printf("\n zero");
	 break;
	 case 0:
	 printf("\n nagetive");
	 break;
	 }
	}
  getch();
}
