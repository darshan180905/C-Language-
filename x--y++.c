#include<stdio.h>
#include<conio.h>
void main()
{
    int x=4,y=0,z;
    clrscr();
    while(x>=4)
    {
        x--;
        y++;
        if(x==y)
        continue;
        else
        printf("\n %d %d",x,y);
    }
    getch();
}