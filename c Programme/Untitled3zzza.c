#include<stdio.h>
#include<conio.h>
int main()
{
    char Gender,ms;
    int age;
    printf("Enter age,Gender and marital status");
    scanf("%d%c%c",&age,&Gender,&ms);
    if((ms=='M')||(ms=='U'&&Gender=='M'&&age>30)||(ms=='U'&&Gender=='F'&&age>25))
    printf("Driver should be insured\n");
    else
    printf("Driver should not be insured\n");
    getch();
}

