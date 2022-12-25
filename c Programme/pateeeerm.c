
#include <stdio.h>
int main()
{
    int i, j, rows, x, y;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(x=rows-1; x>=1; --x)
    {
        for(y=1; y<=x; ++y)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}
