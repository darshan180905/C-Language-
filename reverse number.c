#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    int r=0;
    while(n>0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("\n reverse of number %d",r);
    getch();
}