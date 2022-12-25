#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter age of Ruby :");
	scanf("%d",&a);
	printf("enter age of Chavii :");
	scanf("%d",&b);
	printf("enter age of Monika :");
	scanf("%d",&c);
	if(a>b)
	if(b>c)
	{
		printf("Monika is youngest");
	}
	else
	{
		printf("chavii is youngest");
	}
	if(b>a)
	if(a>c)
	{
		printf("Monika is youngest");
	}
	else
	{
		printf("Ruby is youngest");
	}
	
	getch();
}
	
