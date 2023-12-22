#include<stdio.h>
#include<conio.h>
void main()
{
	int number,sum;
	clrscr();
	printf("\n enter the number==>");
	scanf("%d",&number);
	sum=number*-1;
	if(number<0)
	{
	 printf("\n your absulate value after converted is =%d",sum);
	}
	if(number>0)
	{
	 printf("\n your value is positive as it=%d",number);
	}
	getch();
}
