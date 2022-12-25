/*
						1112
						3222
						3334
*/

#include<stdio.h>
int main()
{
	int x; int y; int z; int p; int q;
	printf("Enter the no. of row ");
	scanf("%d",&x);
	for(y=1;y<=x;y=y+1)
	{
		p=y+1;
		printf("%d %d %d %d\n",y,y,y,p);
		q=p+1;
		for(z=y;z<p;++z)
		{
		   	if(z<x)
			{
				break;
			}
			printf("%d %d %d %d\n",q,p,p,p);
		
		}
	}
}
