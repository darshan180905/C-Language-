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
        int a=1;
            for(int j=1;j<=n;j++)
            {
                printf("%d",a);
                a=a+2;
            }
            printf("\n");
    }
    getch();
}