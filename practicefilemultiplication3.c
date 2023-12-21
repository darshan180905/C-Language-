//write a c program multiplication of two variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,mul;
    clrscr();
    printf("\n enter the value of a :-> ");
    scanf("%d",&a);
    printf("\n enter the value of b :-> ");
    scanf("%d",&b);
    mul=a*b;
    printf("\n multiplication of value is %d",mul);
    getch();
}