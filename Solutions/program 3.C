/*program for palindrom*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	if(d==c)
		printf("\n palindrome number");
	else
		printf("\n not palindrome number");
	getch();
}
