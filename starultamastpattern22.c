#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nsp++;
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        nst--;
        printf("\n");
    }
    getch();
}