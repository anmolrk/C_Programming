#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		 if (num%i==0)
		{
			printf("not a prime no.");
			break;
		}
		i++;
	}
	if(i==num)
	{
		printf("prime no.");
	}
}
