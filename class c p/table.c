#include<stdio.h>
int main()
{
	int n;	int x;	int p;
	printf("this is the table of ");
	scanf("%d",&n);
	for(x=1;x<11;++x)
		{
			p=n*x;
			printf("\t%d x %d = %d\n",n,x,p);
		}
	
	return 0;
}
