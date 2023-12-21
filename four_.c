#include<stdio.h>
#include<conio.h>
void main()
{
    int c=0;
    clrscr();
    for(int r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}