#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\n the number of digits %d",count);
    getch();
}
