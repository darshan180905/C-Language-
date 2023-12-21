#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int o=1;o<=nst;o++)
        {
            printf("*");
        }
        printf("\n");
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
    }
    getch();
}