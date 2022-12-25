#include<stdio.h>
void modify(int[],int)		//decleration
void modvalue(int)
int main()
{
	int i;
	int a[5]=[1,2,3,4,5];
	printf("print your array... ");
	
	for(i=0;i<5;i++)
	{
		printf("Array is %d",a[i]);
	}
	modify(a[],5);
	printf("we want to see the above change function made ");
	for(i=0;i<5;i++)
	{
		printf("change in Array is %d",a[i]);
	}
	printf("now before calling modvalue fuction we are that value which we gonna pass to modvalue");
	printf("%d"a[3]);
	modvalue(a[3]);
}
//fuction defination
modify(b[],int s)
{
	int i;
	for(i=0;i<5;i++);
	{
		b[i]*2 
	}
}
modvalue(e)
{
	printf("%d",e*3);
}
