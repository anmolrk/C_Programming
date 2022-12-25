#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int x, y, z, a, b, j;
	printf("do you want to find factor ");printf("=========================================================\n");
	printf("If yes then press 0 other wise for stop press 1 ");
	scanf("%d",&b);
	if(b==0||b==1)
	{
		
		if(b==0)
		{   
			for(a=b;a<1;a++)
			{
				printf("enter the no whose factor needed :");
				scanf("%d",&x);
				printf("=========================================================\n");
				for(y=1;y<=x;++y)
				{
					z=x%y;
					if(z==0)
					{
						printf("%d\t",y);
					}
				}
				printf("\ndo you want to find factor ");printf("\n=========================================================\n");
				printf("If yes then press 0 other wise for stop press 1 ");
				scanf("%d",&j);
			}
		}
	}
}
