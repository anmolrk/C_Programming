#include <stdio.h>

void main()
{
    int a[100], n,ctr;
    int i, j, k; 
	printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	    printf("element %d : ",i+1);
	    scanf("%d",&a[i]);
	}
	printf("\nThe unique elements found in the array are : \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
		for(j=0; j<i-1; j++)
        {
            if(a[i]==a[j])
            {
                ctr++;
            }
        }
        for(k=i+1; k<n; k++)
        {
            if(a[i]==a[k])
            {
                ctr++;
            }
        }
	    if(ctr==0)
        {
          printf("%d ",a[i]);
        }
    }
       printf("\n\n");
}
