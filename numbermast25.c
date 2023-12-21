#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int f=1;f<=2*n+1;f++)
    {
        printf("%d",f);
    }
    printf("\n");
    
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
            a++;
        }
        for(int h=1;h<=nst;h++)
        {
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    getch();
}