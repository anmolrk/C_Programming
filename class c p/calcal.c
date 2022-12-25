#include<stdio.h>

int add(int x,int y)
{
	int f;
	f=x+y;
	return f;
}
int sub(int x,int y)
{
	int f;
	f=x-y;
	return f;
}
int pro(int x,int y)
{
	int f;
	f=x*y;
	return f;
}
int qus(int x,int y)
{
	int f;
	f=x/y;
	return f;
}
int main()
{
	int a,b;
	int q,w,e,r;
	printf("enter 1st no. : ");
	scanf("%d",&a);
	printf("enter 2nd no. : ");
	scanf("%d",&b);
	int add(a,b);
	int sub(a,b);
	int pro(a,b);
	int qus(a,b);
	q=add(a,b);
	w=sub(a,b);
	e=pro(a,b);
	r=qus(a,b);
	printf("--------------------------------------------------------------------------\n");	
	printf("--------------------------------------------------------------------------\n");
	printf("addition is %d\n",q);	
	printf("substration is %d\n",w);
	printf("product is %d\n",e);
	printf("divide is %d\n",r);
	return 0;
}
