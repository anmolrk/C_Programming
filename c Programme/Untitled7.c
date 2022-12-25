#include<stdio.h>
#include<conio.h>
int main()
{
	int qty;
	float dis=0;
	float rate,tot;
	printf("enter quantiy and rate");
	scanf("%d %f",&qty,&rate);
	
	if(qty>1000)
	
	dis=30;
	tot=(qty*rate)-(qty*rate-dis/100);
	printf("Total Expense= Rs %f\n",tot);
	
}
