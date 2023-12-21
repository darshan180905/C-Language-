#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("\n enter the number");
    scanf("%d",&n);
    int sum=0;
    int lastdigit=0;
    while(n!=0)
    {
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("\n sum of lastdigit = %d",sum);
    getch();
}