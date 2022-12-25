#include<stdio.h>
#include<conio.h>
main()
{
	float a;
	float b;
	printf("\n enter cost price:");
	scanf("%f",&a);
	printf("\n enter selling price:");
	scanf("%f",&b);
	float c;
	c=b-a;
	if(c>0){
	
	prinf("great you get the profit of %f",c);
    }
	else{
	
	prinf("you got the loss of %f",c);
    }
	getch();
}
