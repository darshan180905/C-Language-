#include<stdio.h>
#include<conio.h>
void main()
{
    int r=0,c=0;
    clrscr();
    int n=0;
    for(r=1;r<=4;r++)
    {
        for(c=4,n=65;c>=r;c--,n++)
        {
            printf("%c\t",n);
        }
        printf("\n");
    }
        getch();
}