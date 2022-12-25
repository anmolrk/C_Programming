#include<stdio.h>
int main()

{
	int x,y;
	x=6;	y=7;
	void swap(int,int);
	swap(x,y);
	int a;
	int area(int l, int b);
	a=area(10,5);
	printf("%d\n",a);
}
void swap(int a, int b)
{		
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf(" %d %d\n",a,b);
}
int area(int l, int b)
{
	return(l*b);
}
