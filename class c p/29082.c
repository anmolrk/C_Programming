#include<stdio.h>
int main()
{
	int n,c,k;
	printf("enter number of rows \n");
	scanf("%d",&n);
	for(c=1;c<=n;c++)		//outer loop
	{
		for(k=1;k<=c;k++)	//inner loop
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}	
