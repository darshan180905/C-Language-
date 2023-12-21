#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) sum=sum-i;
        else sum=sum+i;
    }
    printf("\n Indi of number %d",sum);
    getch();
}