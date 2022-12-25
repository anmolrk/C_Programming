#include<stdio.h>
	int main()
	{
		int year;
		printf("Enter Year \t");
		scanf("%d",&year);
		
		if(year%4)
		printf("not a leap year");
		else if(year%100)
		printf("leap year");
		else if(year%400)
		printf("not leap year");
	}

