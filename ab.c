#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter the value of ch");
    scanf("%c",&ch);
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    if(ch == '1')
    {
     printf("\n addition =%d",a+b);
    }
    if(ch == '2')
    {
     printf("\n subtract =%d",a-b);
    }
    if(ch == '3')
    {
     printf("\n multiplication =%d",a*b);
    }
    if(ch == '4')
    {
     printf("\n division =%d",a/b);
    }
    if(ch == '5')
    {
     printf("\n modular =%d",a%b);
    }
    if(ch == '6')
    {
     printf("\n defolt =%d",a,b);
    }
  getch();
}