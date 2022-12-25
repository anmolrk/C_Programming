#include <stdio.h>
int main()
{
    int a[7][7], b[7][7], result[7][7],i,j,k;
    for(i=0; i<7; ++i)
        for(j=0; j<7; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<7; ++i)
        for(j=0; j<7; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }
    
    for(i=0; i<7; ++i)
        for(j=0; j<7; ++j)
            for(k=0; k<7; ++k)
            {
                result[i][j]=a[i][k]*b[k][j];
            }
    printf("\nOutput Matrix:\n");
    for(i=0; i<7; ++i)
        for(j=0; j<7; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == 7-1)
                printf("\n\n");
        }
    return 0;
}
