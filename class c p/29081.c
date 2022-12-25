#include<stdio.h>
int main()
{
	int i,j;
	int max=5;
	for(i=max;i>=0;i--)		//outer loop
	{
		for(j=0;j<=i;j++)	//inner loop
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

