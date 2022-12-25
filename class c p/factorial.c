#include <stdio.h>
int main()
{
    int i, j, factorial=1, z;
    printf("Enter number: ");
   	scanf("%d",&i);
   	
    	if(i<0)
    	{
    		printf("ERROR write any positive number.\n ");
    		    		
    	for(z=0;z<1;++z)
   		 {
    	
    	printf("Enter number: ");
   		scanf("%d",&i);
		}}
   if(i!=0)
    {
    for(j=1; j<=i; ++j)
    {
	   factorial*=j;
	}
	printf("the factorial %d is %d",i,factorial);
	}
	else
	printf("the factorial %d is 1",i);
	return 0;
}
	
