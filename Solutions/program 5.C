/*prime number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,c=0,d=0;
	 clrscr();
	 printf("enter the number to check prime:");
	 scanf("%d",&a);
	 c=a/2;
	 for(b=2;b<=c;b++)
	 {
		if(a%b==0)
	 {
		printf("number is not prime number");
		d=1;
		  break;
	 }
	 }
	 if(d==0)
	   printf("number is prime");
	 getch();
}