#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("enter Subject 1 marks :");
	scanf("%d",&a);
	printf("enter Subject 2 marks :");
	scanf("%d",&b);
	printf("enter Subject 3 marks :");
	scanf("%d",&c);	
	printf("enter Subject 4 marks :");
	scanf("%d",&d);	
	printf("enter Subject 5 marks :");
	scanf("%d",&e);	
	int f;
	f=(a+b+c+d+e)*100/500;
	if(f>=60)
	{
		printf("you got 1st division");
	}
	else if(f>=50)
	{
		printf("you got 2nd division");
	}
	else if (f>=40)
	{
		printf("you got 3rd division");
	}
	else
	{
		printf("you fail");
	}
	getch();
}
