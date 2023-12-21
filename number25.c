#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}