#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number :-> ");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            
            int a=i;
            if(a>n) a=2*n-i;
            int b=j;
            if(b>n) b=2*n-j;
            if(a<b) min=a;
            else min=b;
            printf("%d",min);
        }
    printf("\n");
    }
    getch();
}