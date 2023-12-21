#include<stdio.h>
#include<conio.h>
void main()
{
    char choice;
    clrscr();
    printf("\n enter the choice ");
    scanf("%c",&choice);
    switch(choice)
        {
            case 'r' : printf("red");
                        break;
            case 'w': printf("white");
                        break;
            case 'b' : printf("blue");
                        break;
            default :  printf("error");
                        break;
        }
        getch();
}