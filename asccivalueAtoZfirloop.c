#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    for(int i=65;i<=90;i++)
    {
        char ch = (char)i;
        printf("%c -> ",ch);
        printf("%d\n",i);
    }
    getch();
}