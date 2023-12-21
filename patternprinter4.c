#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    getch();
}