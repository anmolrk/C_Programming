#include <stdio.h> 

int main() 
{ 
	int a,b,res; 
	
	printf("enter two nos.");
	
	scanf("%d %d",&a,&b);

	printf("a is %d and b is %d\n", a, b); 

	res = a + b;
	printf("a+b is %d\n", res); 

	res = a - b;
	printf("a-b is %d\n", res); 

	res = a * b; 
	printf("a*b is %d\n", res); 

	res = a / b;
	printf("a/b is %d\n", res); 

	res = a % b; 
	printf("a%b is %d\n", res); 
	
	res = Pow(a,b);
	printf("a^b is %d\n", res);

	return 0; 
} 

