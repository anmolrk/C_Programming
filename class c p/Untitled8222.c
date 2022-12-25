#include<stdio.h>
#include<math.h>
int main()
{
	int n, rn =0, r;
	printf("enter an integer");
	scanf("%d",&n);
	
	while(n != 0)
	{
		r=n%10;
		rn = rn*10+r;
		n /=10;
	}
	printf("reverse no. = %d",rn);
	return 0;
}
