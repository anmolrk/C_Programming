#include<stdio.h>
int main()
{
	int a[100], pos, i, num, n;
	printf("enter the size of the array max[100] ");
	scanf("%d",&n);
	printf("enter element of an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position where you want to insert new value " );
	scanf("%d",&pos);
	printf("enter the new value to be inserted ");
	scanf("%d",&num);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=num;
	n++;
	printf("array of the inserting new element \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
