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
	printf("enter the position where you want to delete from an array " );
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("resultant array  \n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
