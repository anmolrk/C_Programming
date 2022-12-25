#include<stdio.h>
int main()
{
	int a[100];
	int b,c,d,f;
	printf("enter the no. of element  ");
	scanf("%d",&b);
	printf("enter the number\n");
	for(c=0;c<b;c++)
	{	
		printf("a[%d] = ",c);
		scanf("%d",&a[c]);
	}
	for(c=0;c<b/2;c++)
	{
		d=c+1;
		f=b-d;
		if(a[c]==a[f])
		printf("a[%d]==a[n-%d]\n",c,d);	
	}
}
