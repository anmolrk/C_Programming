#include<stdio.h>
void code();
int main()
{
    code(); code();
    return 0;
}
void code()
{
    int x,y,a,b,i,z;
    for(i=1;i<=4;i++)
    {
        printf("my name is jha\n");
    }
    printf("enter the value of x,y,z");
    scanf("%d %d %d",&x,&y,&z);
    if(x<=3)
        x=y;
    else
    {
        if(y>=4)
        printf("you are mad");
    }
}

