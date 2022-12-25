#include<stdio.h>
	int main()
	{
		int year,i;
		for(i=0;i<10;++i)
		{
			printf("Enter Year \t");
			scanf("%d",&year);
			if (((year%4)==0)&&((!((year%100)==0))||((year%400)==0)))
			{
				printf("year %d is a leap year\n",year);
			}
			else
			{
			printf("year %d is not a leap year\n",year);	
			}
		}
	}
