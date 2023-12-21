#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m;
    clrscr();
    printf("\n enter the number of row -> ");
    scanf("%d",&n);
    printf("\n enter the number of column -> ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=m;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
    