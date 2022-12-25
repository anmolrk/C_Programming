#include<stdio.h>
#include<conio.h>
int main()
{
	char gender,ms;
	int age;
	printf("enter age");
	scanf("%d",&age);
	printf("enter martial status");
	scanf("%c",&ms);
	printf("enter gender");
	scanf("%c",&gender);
	if(ms=='m')
	{
		printf("driver insured");
	}
	else if(ms=='u')
	{
		if(gender=='m')
		{
			if(age>'30')
			{
				printf("driver insured");
			}
			else
			{
				printf("driver is not insured");
			}
		}
		else if(gender=='f')
		{
	    	if(age>='25')
			{
				printf("driver insured");
			}
			else
			{
				printf("driver is not insured");
			}
		}
	}
	
}
