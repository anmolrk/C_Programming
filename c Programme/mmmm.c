#include<stdio.h>
int factorial()
{
	int n, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
}
int prime()
{
	int n,i,m=0,flag=0;    
	printf("Enter the number to check prime:");    
	scanf("%d",&n);    
	m=n/2;    
	for(i=2;i<=m;i++)    
	{    
	if(n%i==0)    
	{    
	printf("Number is not prime");    
	flag=1;    
	break;    
	}    
	}    
	if(flag==0)    
	printf("Number is prime");
}
int oe()
{
	int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}
int main()
{
	int x,y=1;
	while(y>0)
	{
	printf("\n");
	printf("1. Factorial of a number\n2. Prime or not\n3. Odd & Even\n4. Exit");
	printf("\n");
	scanf("%d",&x);
		switch(x)
		{
			case 1:
				factorial();
				printf("\n---------------------------------------");
				break;
			case 2:
				prime();
				printf("\n---------------------------------------");
				break;
			case 3:
				oe();
				printf("\n---------------------------------------");
				break;
			case 4:
				printf("exit");
				printf("\n---------------------------------------");
				break;
			default:
				printf("invalid");
				break;
		}
		if(x==4)
		break;
	}
}
