#include<stdio.h>
int calsum(int x,int y,int z);
int main()
{
	int a,b,c,sum;
	printf("enter any three no.");
	scanf("%d %d %d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("sum = %d\n",sum);
}
int calsum(int x,int y,int z)
{
	int sum;
	sum=x+y+z;
	return sum;
}
