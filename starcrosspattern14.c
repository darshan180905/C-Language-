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
        for(int j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}