#include <stdio.h>
struct fc
{
	char name[50];
	float height;
	float weight;
	int stamina;	
}myfc;
int main()
{
	int i;
	struct fc F[4];
	for(i=0;i<=15;i++)
	{
		fflush(stdin);
		printf("enter name:\n");
		gets(F[i].name);
		printf("enter height:\n");
		scanf("%f",&F[i].height);
		printf("enter weight:\n");
		scanf("%f",&F[i].weight);
		printf("enter stamina:\n");
		scanf("%d",&F[i].stamina);
	}
	printf("\nname\theight\t\tweight\t\tstamina\n");
	for(i=0;i<=15;i++)
	{
		printf("%s\t%f\t%f\t%d\n",F[i].name,F[i].height,F[i].weight,F[i].stamina);
	}	
}

