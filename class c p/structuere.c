#include <stdio.h>
struct car
{
	char name[50];
	int seats;
	float price;
}myCar;
int main()
{
	int i;
	struct car C[3];
	printf("enter name of car:\n");
	gets(myCar.name);
	printf("enter no. of seats in car:\n");
	scanf("%d",&myCar.seats);
	printf("enter price of car:\n");
	scanf("%f",&myCar.price);
	printf("\ncarname\t\t\tseats\tprice\n");
	printf("%s\t\t%d\t%f\n",myCar.name,myCar.seats,myCar.price);
	for(i=0;i<=2;i++)
	{
		fflush(stdin);
		printf("enter name of car:\n");
		gets(C[i].name);
		printf("enter no. of seats in car:\n");
		scanf("%d",&C[i].seats);
		printf("enter price of car:\n");
		scanf("%f",&C[i].price);
	}
	printf("\ncarname\tseats\tprice\n");
	for(i=0;i<=2;i++)
	{
		printf("%s\t%d\t%f\n",C[i].name,C[i].seats,C[i].price);
	}	
}

