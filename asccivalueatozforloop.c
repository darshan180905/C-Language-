#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    for(int i=97;i<=122;i++)
    {
        char ch = (char)i;
        printf("%c -> ",ch);
        printf("%d\n",i);
    }
    getch();
}