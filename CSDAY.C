#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\n\t\t\tprogram for csday \n\n\t\t\t");
	printf("\n enter the character");
	scanf("%c",&ch);
	if(ch=='S' || ch=='s')
	{
	 printf("\n\n\n\t\t\t sunday \n\n\n\t\t\t");
	}
	else if(ch=='M' || ch=='m')
	{
	 printf("\n\n\n\t\t\t monday \n\n\n\t\t\t");
	}
	else if(ch=='T' || ch=='t')
	{
	 printf("\n\n\n\t\t\t tuesday \n\n\n\t\t\t");
	}
	else if(ch=='W' || ch=='w')
	{
	 printf("\n\n\n\t\t\t wednesday \n\n\n\t\t\t");
	}
	else if(ch=='H' || ch=='h')
	{
	 printf("\n\n\n\t\t\t thursday \n\n\n\t\t\t");
	}
	else if(ch=='F' || ch=='f')
	{
	 printf("\n\n\n\t\t\t friday \n\n\n\t\t\t");
	}
	else if(ch=='A' || ch=='a')
	{
	 printf("\n\n\n\t\t\t saturday \n\n\n\t\t\t");
	}
	getch();
}