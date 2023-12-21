#include<stdio.h>
#include<conio.h>
void main()
{
    int x=4,y,z;
    clrscr();
    y=--x;
    z=x--;
    printf("\n %d %d %d",x,y,z);
    getch();
}