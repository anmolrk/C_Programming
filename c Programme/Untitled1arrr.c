#include<stdio.h>
void main()
{
	int a[4][3], i, j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the value of a[%d] [%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements of 2D matrix are \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
