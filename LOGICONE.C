#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char ch;
	clrscr();
	printf("enter the logical opreter ch");
	scanf("%c",&ch);
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	if(ch == '1')
	{
	 printf("addition=%d",a+b);
	}
	if(ch == '2')
	{
	 printf("subtraction=%d",a-b);
	}
	if(ch == '3')
	{
	 printf("multiplication=%d",a*b);
	}
	if(ch == '4')
	{
	 printf("division=%d",a/b);
	}
	if(ch == '5')
	{
	 printf("moduler=%d",a%b);
	}
	if(ch == '6')
	{
	 printf("wrong defoalt",a,b);
	}
	getch();
}












