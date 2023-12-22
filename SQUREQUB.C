#include<stdio.h>
#include<conio.h>
void main()
{
	int number1,number2,number3,number4,number5,number6,number7,number8,number9,number10,sume=0,sumc=0;
	clrscr();
	printf("\n enter the number1");
	scanf("%d",&number1);
	printf("\n enter the number2");
	scanf("%d",&number2);
	printf("\n enter the number3");
	scanf("%d",&number3);
	printf("\n enter the number4");
	scanf("%d",&number4);
	printf("\n enter the number5");
	scanf("%d",&number5);
	printf("\n enter the number6");
	scanf("%d",&number6);
	printf("\n enter the number7");
	scanf("%d",&number7);
	printf("\n enter the number8");
	scanf("%d",&number8);
	printf("\n enter the number9");
	scanf("%d",&number9);
	printf("\n enter the number10");
	scanf("%d",&number10);
	if(number1%2==0)
	{
	sume=sume+number1*number1;
	}
	else
	{
	sumc=sumc+number1*number1*number1;
	}
	if(number2%2==0)
	{
	sume=sume+number2*number2;
	}
	else
	{
	sumc=sumc+number2*number2*number2;
	}
	if(number3%2==0)
	{
	sume=sume+number3*number3;
	}
	else
	{
	sumc=sumc+number3*number3*number3;
	}
	if(number4%2==0)
	{
	sume=sume+number4*number4;
	}
	else
	{
	sumc=sumc+number4*number4*number4;
	}
	if(number5%2==0)
	{
	sume=sume+number5*number5;
	}
	else
	{
	sumc=sumc+number5*number5*number5;
	}
	if(number6%2==0)
	{
	sume=sume+number6*number6;
	}
	else
	{
	sumc=sumc+number6*number6*number6;
	}
	if(number7%2==0)
	{
	sume=sume+number7*number7;
	}
	else
	{
	sumc=sumc+number7*number7*number7;
	}
	if(number8%2==0)
	{
	sume=sume+number8*number8;
	}
	else
	{
	sumc=sumc+number8*number8*number8;
	}
	if(number9%2==0)
	{
	sume=sume+number9*number9;
	}
	else
	{
	sumc=sumc+number9*number9*number9;
	}
	if(number10%2==0)
	{
	sume=sume+number10*number10;
	}
	else
	{
	sumc=sumc+number10*number10*number10;
	}
	printf("\n the number 1 to 10=%d",sume);
	printf("\n the number 1 yo 10=%d",sumc);
	getch();
}






















