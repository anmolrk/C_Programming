#include<stdio.h>
int main()
{
	int n;
	printf("enter the value\n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("\t%d\n",n);
		n=--n;
	}
}

	
