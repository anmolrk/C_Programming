#include <stdio.h>
int main()
{
    int a[6][6], b[6][6], result[6][6],i,j,k;
    for(i=0; i<6; ++i)
        for(j=0; j<6; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<6; ++i)
        for(j=0; j<6; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }
    
    for(i=0; i<6; ++i)
        for(j=0; j<6; ++j)
            for(k=0; k<6; ++k)
            {
                result[i][j]=a[i][k]+b[k][j];
            }
    printf("\nOutput Matrix:\n");
    for(i=0; i<6; ++i)
        for(j=0; j<6; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == 6-1)
                printf("\n\n");
        }
    return 0;
}
