#include<stdio.h>
#include<conio.h>
void main()
{
        int n;
        clrscr();
        printf("\n enter the number :- ");
        scanf("%d",&n);
        int product=1;
        for(int i=1;i<=n;i++)
        {
            product=product*i;
        }
        printf("\n %d", product);
        getch();
}