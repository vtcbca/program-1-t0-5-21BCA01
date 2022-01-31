/*reverse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("enter number:");
	scanf("%d",&a);
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a/=10;
	}
	printf("reverse number:%d",b);
	getch();
}
