#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("\n 1 = monday,\n 2 = tuesday,\n 3 = wedesday,\n 4 = thursday,\n 5 = friday,\n 6 = saturday,\n 7 = sunday\n");
	printf("enter the value of number");
	scanf("%d",&number);
	switch(number)
	{
	 case 1 :
	 printf("\n monday");
	 break;
	 case 2 :
	 printf("\n tuesday");
	 break;
	 case 3 :
	 printf("\n wednesday");
	 break;
	 case 4 :
	 printf("\n thursday");
	 break;
	 case 5 :
	 printf("\n friday");
	 break;
	 case 6 :
	 printf("\n saturday");
	 break;
	 case 7 :
	 printf("\n sunday");
	 break;
	 default  :
	 printf("\n pleace enter proper number");
	 break;
	 }
	 getch();
}





















