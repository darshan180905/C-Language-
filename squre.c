#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("\n enter base :- ");
    scanf("%d",&a);
    printf("\n enter power :- ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("\n %d raise of power %d is %d",a,b,power);
    getch();
}
