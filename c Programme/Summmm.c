#include<stdio.h>
#include<conio.h>
int main()
{	
	float x,y,z;
	int r,t;
	float q,w;
	printf("enter two value for divide\n----------------------------\n");
	scanf("%f %f",&x,&y);
	q=x/y;
	w=y/x;

	printf("\n----------------------------\nthe quotient of %f/%f = %f\n----------------------------\n",x,y,q);

	
	printf("the quotient of %f/%f = %f\n----------------------------\n",y,x,w);

	
	printf("THANK YOU FOR USING");
	return 0;	
}
