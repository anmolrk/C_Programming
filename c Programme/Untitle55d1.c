#include<stdio.h>
int main()
{
	int m, n, p, q, c, d, k, sum=0;
	int first[10][10], sec[10][10], ond[10][10], multiply[10][10];
	printf("enter number of rows and columns of firt matrix\n");	
	scanf("%d %d",&m,&n);
	printf("enter elements of first matrix\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&first[c][d]);
		}
	}
	printf("enter numer of row and column of second matrix\n");
	scanf("%d %d",&p,&q);
	
	if(n!=p)
	{
		printf("the matrices can't be multiplied with each other\n");
	}
	else
	{
		printf("enter elements of second matrix\n");
		for (c=0) 

