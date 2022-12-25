#include<stdio.h>
int main()
{
	int n;	int x;	int p;	int z; int a;
	printf("enter the no. from table need  ");
	scanf("%d",&a);
	printf("enter the no. upto table need  ");
	scanf("%d",&z);
	for(n=a;n<=z;++n)
	{
		printf("table of %d\n",n);
		for(x=1;x<11;++x)
		{
			p=n*x;
			printf("\t%d x %d = %d\n",n,x,p);
		}
	}
	return 0;		
}				
