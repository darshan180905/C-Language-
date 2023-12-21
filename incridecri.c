#include<stdio.h>
#include<conio.h>
void main()
{
    int x=4,y=0,z;
    clrscr();
    while(x>=0)
    {
    if(x==y)
    break;
    else
    printf("\n %d %d",x,y);
    x--;
    y++;
    }
    getch();
}