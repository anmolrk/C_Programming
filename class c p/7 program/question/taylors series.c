#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,angle;
	float x,sum=0,num,term,m;
	printf("Enter the value ");
	scanf("%d",&angle);
	x=angle*(3.142/180);
	num=x;
	i=2;
	m=1;
	do
	{
		term=num/m;
		sum=sum+term;
		num=-num*x*x;
		m=m*i*(i+1);
		i=i+2;
	}
	while(fabs(term)>=0.00001);
	printf("\nresullt of SinX = %f",sum);
}
