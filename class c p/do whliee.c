#include<stdio.h>
int main()
{
	int n=10;
	do
	{
		printf("\t%d\n",n);
		n=--n;
	}
	while (n>0);
	return 0;
}
