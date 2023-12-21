#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int nst=1;
    int nps=3;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nps;j++)
        {
            printf(" ");
        }
        nps--;
            for(int k=1;k<=nst;k++)
            {
                printf("*");
            }
            nst+=2;
            printf("\n");
    }
    getch();
}