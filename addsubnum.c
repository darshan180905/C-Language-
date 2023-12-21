#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    clrscr();
    printf("\n enter the number :- ");
    scanf("%d",&n);
    if(n%2==0)
    {
         sum=-n/2;
    }
    else
    {
         sum=-n/2+n;
    }
    printf("%d",sum);
    getch();
}
