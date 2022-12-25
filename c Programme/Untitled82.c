#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter 1st angle :");
	scanf("%d",&a);
	printf("enter 2nd angle :");
	scanf("%d",&b);
	printf("enter 3rd angle :");
	scanf("%d",&c);
	int d;
	d=a+b+c;
	if(d==180)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("tringle is not valid");
	}
	getch();
}
