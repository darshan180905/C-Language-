#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int c,english,fco,hic,precticle,maths,office,atkt=0;
 float total,per;
 clrscr();
 fflush(stdin);
 printf("\n enter the value of c");
 scanf("%d",&c);
 printf("\n enter the value of english");
 scanf("%d",&english);
 printf("\n enter the value of fco");
 scanf("%d",&fco);
 printf("\n enter the value of hic");
 scanf("%d",&hic);
 printf("\n enter the value of precticle");
 scanf("%d",&precticle);
 printf("\n enter the value of maths");
 scanf("%d",&maths);
 printf("\n enter the value of office");
 scanf("%d",&office);
 total=c+english+fco+hic+precticle+maths+office;
 printf("\n total is %f",total);
 per=(float)(total/7);
 fflush(stdin);
 printf("\n per %f",per);
if(c<40)
	atkt++;
if(english<40)
	atkt++;
if(fco<40)
	atkt++;
if(hic<40)
	atkt++;
if(precticle<40)
	atkt++;
if(maths<40)
	atkt++;
if(office<40)
	atkt++;
if(atkt<=2)
{
if(per>=70)
 {
	printf("distigtion");
 }
 else if (per>=60 && per<70)
 {
	printf("first class");
 }
  else if(per>=50 && per<60)
 {
	printf("second class");
 }
 else if(per>=40 && per<50)
 {
	printf("pass class");
 }
}
if(atkt!=0)
{
if(atkt<=2)
	printf("\n atkt");
else
	printf("\n fail");
}

getch();
}



