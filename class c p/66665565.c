#include<stdio.h>
	int main()
	{
		int year,i;
		for(i=0;i<10;++i)
		{
			printf("Enter Year \t");
			scanf("%d",&year);
			if(year%100==0)
			{
				if(year%400==0)
				printf("leap year\n");
			
				else
				printf("not leap year\n");
			}
			else if(year%4==0)
			printf("leap year\n");
			else
			printf("not leap year\n");
		}
	}
