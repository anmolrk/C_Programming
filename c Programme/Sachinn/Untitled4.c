#include<stdio.h>
void sum();
{
	int res;
	res=sum();
	printf("sum is %d",res );
}
void main()
{
	int a,b,add;
	printf("enter value of a & b ");
	scanf("%d %d",&a,&b);
	add=a+b;
	return add;
}
