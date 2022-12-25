#include<stdio.h>
long factorial(long factorial);
int main()
{
	int i,enter;
	printf("enter no. for factoril: ");
	scanf("%d",&enter);
	for(i=1;i<=enter;i++)
	{
		printf("%2d! = %1d\n",i,factorial(i));
	}
	return 0;
}
long factorial(long number)
{
	if(number<=1)
	{
		return 1;
	}
	else 
	{
		return(number*factorial(number-1));
	}
}
