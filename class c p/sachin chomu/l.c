#include<stdio.h>
void main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);

	if(x<y)
	{
		if(x<z)
		printf("%d smaller",x);
		else
		printf("%d is chota",z);
	}
	else
	{
		if(y<z)
		printf("%d smaller",y);
		else
		printf("%d is chota",z);
	}
}
