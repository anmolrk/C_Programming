#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
    int b;
    int temp;
    printf("enter 2 variable");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    getch();
}


