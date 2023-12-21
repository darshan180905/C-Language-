#include<stdio.h>
#include<conio.h>
void main()
{
    int r=0,c=0;
    clrscr();
    for(r=1;r<=4;r++)
    {
        for(c=4;c>=r;c--)
        {
            printf("\t*");
        }
        printf("\n");
    }
    getch();
}