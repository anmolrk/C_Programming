#include<stdio.h>
int main()
{
	int a;		int b;
	void add(int,int);
	printf("enter two value: ");
	scanf("%d  %d",&a,&b);
	add(a,b);
}
	void add(int x,int y)
	{
		int sum=x+y;
		printf("sum is %d",sum);
	}
