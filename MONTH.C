#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("\n 1 = january");
	printf("\n 2 = february");
	printf("\n 3 = march");
	printf("\n 4 = april");
	printf("\n 5 = may");
	printf("\n 6 = june");
	printf("\n 7 = july");
	printf("\n 8 = august");
	printf("\n 9 = saptember");
	printf("\n 10 = octomber");
	printf("\n 11 = november");
	printf("\n 12 = december");
	printf("\n\n enter the number");
	scanf("%d",&number);
	switch(number)
	{
	 case 1 :
	 printf("\n january");
	 break;
	 case 2 :
	 printf("\n february");
	 break;
	 case 3 :
	 printf("\n march");
	 break;
	 case 4 :
	 printf("\n april");
	 break;
	 case 5 :
	 printf("\n may");
	 break;
	 case 6 :
	 printf("\n june");
	 break;
	 case 7 :
	 printf("\n july");
	 break;
	 case 8 :
	 printf("\n august");
	 break;
	 case 9 :
	 printf("\n saptember");
	 break;
	 case 10 :
	 printf("\n octmber");
	 break;
	 case 11 :
	 printf("\n november");
	 break;
	 case 12 :
	 printf("\n december");
	 break;
	 default :
	 printf("\n pleace check your enter number");
	 break;
	 }
	 getch();
}









