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
        int a=1;
        for(int j=1;j<=nps;j++)
        {
            printf(" ");
        }
        nps--;
            for(int k=1;k<=nst;k++)
            {
            int d=a+64;
            char ch=(char)d;
                printf("%c",d);
                a++;
            }
            nst+=2;
            printf("\n");
    }
    getch();
}