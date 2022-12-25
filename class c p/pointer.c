#include<stdio.h>
int main()
{
	int *x;		int y;
	printf("Enter the value ");
	scanf("%d",&y);
	x=&y;
	printf("The address of %d is %d",y,x);
}
