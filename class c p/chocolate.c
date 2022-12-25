#include <stdio.h>
struct chocolate
{
	char name[50];
	float weight;
	float calories;
	int price;	
}myfc;
int main()
{
	int i;
	struct chocolate C[4];
	for(i=0;i<=1;i++)
	{
		fflush(stdin);
		printf("enter name:\n");
		gets(C[i].name);
		printf("enter weight in gm:\n");
		scanf("%f",&C[i].weight);
		printf("enter calories:\n");
		scanf("%f",&C[i].calories);
		printf("enter price:\n");
		scanf("%d",&C[i].price);
	}
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("\nname\t\t\tweight(gm)\t\tcalories\t\tprice\n");
	for(i=0;i<=1;i++)
	{
		printf("%s\t\t\t%f\t\t%f\t\t%d\n",C[i].name,C[i].weight,C[i].calories,C[i].price);
	}	
}

