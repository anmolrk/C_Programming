#include<stdio.h>
main()
{
	float C;	//variable C is centigrade of type float
	float F;	/*variable F is farhrenheit of type float*/
	printf("ennter Celcius");
	scanf("%f",&C);
	F=((9*C)/5)+32;	//conversion
	
	printf("THe temprature %f celcius",C);
	printf("equals %f farenheit",F);
	
}
