#include<stdio.h>
int main()
{
	int a;
	int area(int l, int b);
	a=area(10,5);
	printf("%d",a);	
}
int area(int l, int b)
{
	return(l*b);
}
