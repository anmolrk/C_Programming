#include<stdio.h>
void sum()
{
	sum();
}
void main()
{
	int a,b,add;
	printf("Enter the value a & b ");
	scanf("%d %d",&a,&b);
	add=a+b;
	printf("sum is %d",add);
}
