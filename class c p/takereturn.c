#include<stdio.h>

int fun1()
{
	int x,a,b,c;
	printf("enter 1st no. for function 1 : ");
	scanf("%d",&a);
	printf("enter 2nd no. for function 1 : ");
	scanf("%d",&b);
	printf("enter 3rd no. for function 1 : ");
	scanf("%d",&c);
	printf("--------------------------------------------------------------------------\n");
	x=a*b*c;
	return x;
}
int fun2()
{
	int q,w,e,r;
	printf("--------------------------------------------------------------------------\n");
	printf("enter 1st no. for function 2 : ");
	scanf("%d",&w);
	printf("enter 2nd no. for function 2 : ");
	scanf("%d",&e);
	printf("enter 3rd no. for function 2 : ");
	scanf("%d",&r);	
	q=w%e-r;
	return q;
}
int main()
{
	int s,j;
	int fun1();
	int fun2();
	s=fun1();
	j=fun2();
	printf("--------------------------------------------------------------------------\n");	
	printf("--------------------------------------------------------------------------\n");
	printf("function 1 is %d\n",s);		//x=a*b*c
	printf("function 2 is %d\n",j);		//q=w%e-r
	return 0;
}
