#include<stdio.h>
int functy(int a[])
{  
	int f;
	for(f=0;f<10;f++)
	{
	    printf("%d\n",a[f]);
	}
}
int updation(int a[])
{  
	int f,g;
	for(f=0;f<10;f++)
	{
		g=a[f]*0.3;
	    printf("%d\n",g);
	}
}
int main()
{
	int a[10];
	int b,c,d,f;
	printf("enter the number\n");
	for(c=0;c<10;c++)
	{	
		printf("a[%d] = ",c);
		scanf("%d",&a[c]);
	}
	functy(a);
	updation(a);
}
