#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fact=1;
    clrscr();
    printf("\n enter the number");
    scanf("\n %d",&a);
    do
    {
        fact=fact*a;
        a--;
    }
    while(a>=1);
    printf("\n factorial of number is -> %d",fact);
    getch();
}