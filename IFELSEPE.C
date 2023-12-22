#include<stdio.h>
#include<conio.h>
void main()
{
	int c,maths,hic,fco,english,precticle,office;
	float total;
	float per;
	clrscr();
	printf("\n enter the c mark");
	scanf("%d",&c);
	printf("\n enter the maths mark");
	scanf("%d",&maths);
	printf("\n enter the hic mark");
	scanf("%d",&hic);
	printf("\n enter the fco mark");
	scanf("%d",&fco);
	printf("\n enter the english mark");
	scanf("%d",&english);
	printf("\n enter the precticle mark");
	scanf("%d",&precticle);
	printf("\n enter the office mark");
	scanf("%d",&office);
	total=c+maths+hic+fco+english+precticle+office;
	printf("\n %f",total);
	per=total/7;
	printf("\n %f",per);
	if(per>=70)
	{
	 printf("\n distigtion");
	}
	else if(per>=60 && per<70)
	{
	 printf("\n first class");
	}
	else if(per>=50 && per<60)
	{
	 printf("\n second class");
	}
	else if(per>=40 && per<50)
	{
	 printf("\n pass class");
	}
	else
	{
	 printf("\n fail");
	}
	getch();
}