#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,s6,s7,total;
	float per;
	clrscr();
	printf("\n\n\t\t\tprogram for finding grade/class\n\n");
	printf("\n enter the s1");
	scanf("%d",&s1);
	printf("\n enter the s2");
	scanf("%d",&s2);
	printf("\n enter the s3");
	scanf("%d",&s3);
	printf("\n enter the s4");
	scanf("%d",&s4);
	printf("\n enter the s5");
	scanf("%d",&s5);
	printf("\n enter the s6");
	scanf("%d",&s6);
	printf("\n enter the s7");
	scanf("%d",&s7);

	total=s1+s2+s3+s4+s5+s6+s7;
	per=total/7.0;

	printf("\n\ttotal = %d",total);
	printf("\n\tpercentage = % f",per);

	if(per>=70)
	{
		printf("\n\n\t\tcongrase you have got a distigtion class\n\n\t\t");
	}
	else if(per>=60 && per<70)
	{
		printf("\n\n\t\tcongrase you have got a first class\n\n\t\t");
	}
	else if(per>=50 && per<60)
	{
		printf("\n\n\t\tcongrase you have got a second class\n\n\t\t");
	}
	else if(per>=40 && per<50)
	{
		printf("\n\n\t\tcongrase you have got a pass class\n\n\t\t");
	}
	else
	{
		printf("\n\n\t\tyou have a loss exam fail\n\n\t\t");
	}
	getch();






}