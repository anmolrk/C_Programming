#include<stdio.h>
int main()
{
	int x;
	printf("enter your age ");
	scanf("%d",&x);
	if(x<18)
	{
		printf("you are not eligible for voting");
	}
	else
	{
		printf("you are eligible for voting");
	}
	printf("\n-----------------------------------------------------");
	printf("\nThanks you");
	return 0;
}
