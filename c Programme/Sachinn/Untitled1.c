#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,res;
	printf ("Enter value of a & b ");
	scanf("%d %d",&a,&b);
	res=sum(a,b);
	printf("\nsum is %d",res);
}
int sum(int a,int b)
{
	int t;
	t=a+b;
	return t;
}
