#include<stdio.h>
#include<conio.h>
void main()
{
	int r,n,sum=0,i;
	clrscr();
	printf("\n enter the number : ");
	scanf("%d",&n);
	for(i=n;i>0;i/=10)
	{
		if(i%2!=0)
		{
			r=i%10;
			sum+=r;
			n/=10;
		}
    }
		printf("\n sum of odd digit %d",sum);
		getch();
}