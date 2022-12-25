#include<stdio.h>
void sum(int,int);
void main()
{
	int a,b;
	printf("enter value of a & b ");
	scanf("%d %d",&a,&b);
}
void sum(int a,int b)
{
	int add;
	add=a+b;
	printf("sum is %d",add);
}
