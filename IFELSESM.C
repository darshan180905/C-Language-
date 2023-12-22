#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,sum=0,mul=1;
	sum=0;
	mul=1;
	clrscr();
	printf("\n enter the value of a");
	scanf("%d",&a);
	printf("\n enter the value of b");
	scanf("%d",&b);
	printf("\n enter the value of c");
	scanf("%d",&c);
	printf("\n enter the value of d");
	scanf("%d",&d);
	printf("\n enter the value of e");
	scanf("%d",&e);
	if (a%2==0)
	   sum=sum+a;
	else
	   mul=mul*a;
	if (b%2==0)
	   sum=sum+b;
	else
	   mul=mul*b;
	if (c%2==0)
	   sum=sum+c;
	else
	   mul=mul*c;
	if (d%2==0)
	   sum=sum+d;
	else
	   mul=mul*d;
	if (e%2==0)
	   sum=sum+e;
	else
	   mul=mul*e;
	printf("\n sum of even num by=%d",sum);
	printf("\n mul of odd num by=%d",mul);
	getch();
}
































