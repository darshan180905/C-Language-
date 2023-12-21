#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the lines :-> ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}