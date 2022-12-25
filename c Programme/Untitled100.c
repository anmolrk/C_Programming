#include<stdio.h>
#include<conio.h>
int main()
{
	char gender,ms;
	int age;
	printf("enter age");
	scanf("%d",&age);
	printf("enter gender\n");ms
	scanf("%c",&gender);
	printf("enter martial status\n ");
	scanf("%c",&ms);
	if(ms=='M')
	{
		printf("driver should be insured");
	}
	else if (gender=='M')
	{	if(age>=30)
	    {
		    printf("driver should be insured");
	    }
	    else
		{
	    	printf("driver shouldnot be insured");
		}
	}
	else if(gender=='F')
	{
		if(age>=25)
	    {
		    printf("driver should be insured");
	    }
	    else{
	    	printf("driver shouldnot be insured");
		}
	}
    getch();
	
}
