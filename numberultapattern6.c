#include<stdio.h>
#include<conio.h>
void main() 
{
    int n,a;
    clrscr();
    printf("enter the number :-> ");
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
        getch();
}
        