#include<stdio.h>
int main()
{
	int num;
	char another;
	do
	{
		printf("enter a no.");
		scanf("%d",&num);
		printf("square of %d is %d",num,num*num);
		printf("\n want to enter another number");
		fflush(stdin);
	}
	
	while(another='y');
}
