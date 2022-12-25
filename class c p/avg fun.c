#include<stdio.h>
int main()
{
	void fun1(float,float,float,float,float);
	int a,b,c,d,e;
	printf("enter 1st no.: ");
	scanf("%f",&a);
	printf("enter 2nd no.: ");
	scanf("%f",&b);
	printf("enter 3rd no.: ");
	scanf("%f",&c);
	printf("enter 4th no.: ");
	scanf("%f",&d);
	printf("enter 5th no.: ");
	scanf("%f",&e);
	fun1(a,b,c,d,e);
}
void fun1(float z,float x,float v,float n,float m)
{
	float q;
	q=(z+x+v+n+m)/5;
	printf("%f",(z+x+v+n+m)/5);
}

