#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter two no. ");
	scanf("%d %d",&x,&y);
	printf("------------------------------------------------------\n");
	temp=x;
	x=y;
	y=temp;
	printf("the swapping of no. is:-\n%d %d",x,y);
	return 0;
}
