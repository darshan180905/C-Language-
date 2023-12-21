#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int nst=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int q=1;q<=nst;q++)
        {
            printf(" ");
        }
        nst--;
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        int a=i-1;
        for(int s=1;s<=i-1;s++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    getch();
}