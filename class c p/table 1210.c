#include<stdio.h>
int main()
{
	int n;	int x;	int p;
	for(n=1;n<11;++n)
	{
		for(x=1;x<11;++x)
		{
			p=n*x;
			printf("\t%d x %d = %d\n",n,x,p);
		}
	}
	return 0;
}
