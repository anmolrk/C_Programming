#include <stdio.h>
struct pho
{
	char name[50];
	char processor[50];
	int ram;
	int storage;
}myPho;
int main()
{
	int i;
	struct pho P[4];
	printf("%s\t\t%d\t%f\n",myCar.name,myCar.seats,myCar.price);
	for(i=0;i<=2;i++)
	{
		fflush(stdin);
		printf("enter name of Phone:\n");
		gets(P[i].name);
		printf("enter processor in phone:\n");
		scanf("%d",&P[i].seats);
		printf("enter price of car:\n");
		scanf("%f",&P[i].price);
	}
	printf("\ncarname\tseats\tprice\n");
	for(i=0;i<=2;i++)
	{
		printf("%s\t%d\t%f\n",C[i].name,C[i].seats,C[i].price);
	}	
}

